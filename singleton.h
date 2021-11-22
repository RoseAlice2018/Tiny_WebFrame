//
// Created by Reeb Deve on 2021/11/22.
//

#ifndef TINY_WEBFRAME_SINGLETON_H
#define TINY_WEBFRAME_SINGLETON_H

#include <memory>

namespace TinyWebFrame{
    namespace {
        template<class T,class X,int N)
        T& GetInstanceX(){
        static T v;
        return v;
}
        template<class T,class X,int N)
        std::shared_ptr<T> GetInstancePtr(){
        static std::shared_ptr<T> v(new T);
        return v;
}
    }
    /**
     * @brief 单例模式封装类
     * @details T 类型
     *          X 为了创造多个实例对应的tag
     *          N 同一Tag创造多个实例索引
     */
    template<class T,class X = void,int N = 0>
    class Singleton {
    public:
        /**
         * @brief 返回单例裸指针
         */
         static T* GetInstance(){
             static T v;
             return &v;
         }
    };
    template<class T,class X = void,int N = 0>
    class SingletonPtr {
             /**
              * @brief 返回单例智能指针
              */
              static std::shared_ptr<T> GetInstance(){
                  static std::shared_ptr<T> v(new T);
                  return v;
              }
    };
};




#endif //TINY_WEBFRAME_SINGLETON_H
