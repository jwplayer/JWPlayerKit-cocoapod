const instance=new NativeLocalStorage,localStorage=new Proxy(instance,{set:(e,t,n)=>(instance.setItem(t,n),!0),get:(e,t)=>instance.getItem(t)});self.localStorage=localStorage;
