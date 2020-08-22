template<typename T>
	class Cnode
	{
	private:
		T data;
		Cnode<T> * next;
		Cnode<T> * prev;

		template<typename T>
			friend class Circ;
	public:
		Cnode<T> *getNext(){return next;}
		Cnode<T> *getprev(){return prev;}
		T getData(){return data;};
	};
	template<typename T>
		class Circ
		{
		private:
			Cnode<T> *Cursor;
			int n;
		public:
			Circ():Cursor(NULL),n(0){}//done
			~Circ();
			bool empty ()const
			{
				return n<=0&&Cursor==NULL;
			}//done
			int size()const{ return n;}//done
			void addFront(const T & item);//done
			T &getFront()const
			{
				return Cursor->data;
			}//done
			bool remove();//done
			T &back()const
			{
			return Cursor->data;
			}
			void advance()
			{
			Cursor=Cursor->next;
			}
			void preve()
			{
			Cursor=Cursor->prev;
			}
			void display();//done
		
			

			//void Alph(T&item);
			
		};