
#ifndef MINPRIORITYQUEUE_H
#define MINPRIORITYQUEUE_H

// NOTE: You may not include any other libraries!
#include <unordered_map>
#include <vector>
#include <utility> // Has pair and swap

using namespace std;

template <typename T>
class MinPriorityQueue
{
	// For the mandatory running times below:
	//
	// n is the number of elements in the MinPriorityQueue.
	//
	// Assume that the operations of unordered_map are O(1) time 
	// (they are average case, but not worst-case).

	public:
		// Creates an empty MinPriorityQueue
		MinPriorityQueue()
		{
			// TODO
		}

		// Returns the number of elements in the MinPriorityQueue.
		//
		// Must run in O(1) time.
		int size()
		{
			// TODO	
		}	

		// Pushes a new value x with priority p
		// into the MinPriorityQueue.
		//
		// Must run in O(log(n)) time.		 
		void push(T x, int p)
		{
			// TODO
		}

		// Returns the value at the front of the MinPriorityQueue.
		// Undefined behavior if the MinPriorityQueue is empty.
		// 
		// Must run in O(1) time.
		T front()
		{
			if(size() == 0)
			{
				//do something
			}
			else
			{
				return H[0];
			}
		}

		// Removes the value at the front of the MinPriorityQueue.
		// Undefined behavior if the MinPriorityQueue is empty.
		//
		// Must run in O(log(n)) time. 
		void pop()
		{
			//check if empty 
			if(size() == 0)
			{
				//do something
			}
			else
			{
				//return top item and delete rightmost item on bottom layer
				//first swap
				swap(H[0], H[H.size()-1]);

				//second, delete last
				H.pop();

				//check for violations
				int bubbleDown = 0;

			}
		}

		// If x is in the MinPriorityQueue 
		// with current priority at least new_p,  
		// then changes the priority of x to new_p.
		// Undefined behavior otherwise.
		//
		// Must run in O(log(n)) time. 
		void decrease_key(T x, int new_p)
		{
			// TODO
		}

		

	private:
		// You don't need any other instance variables,
		// but you can add some if you want to.
		vector< pair<T, int> > H; // The heap.
		unordered_map<T, int> I;  // Maps values to their indices in H.

		int parent(int i)
		{
			return (i-1)/2;
		}

		int lChild(int i)
		{
			return i * 2 + 1;
		}

		int rChild(int i)
		{
			return i *2 +2;
		}

		void bubbleDown(int i)
		{
			int lc = lChild(i);
			int rc = rChild(i);
			while(lc < H.size() && rc < H.size() && H[i] > min(H[lc], H[rc]))
			{
				//find smallest child
				if(H[lc] < H[rc])
				{
					//bubble down to left child
					swap(H[lc], H[i]);
					i = lc;
				}
				else
				{
					swap(H[rc], H[i]);
					i = rc;
				}
			}
		}

		void bubbleUp(int i)
		{
			int p = parent(i);
			while(p > 0 && H[i] < H[p])
			{
				swap(H[p], H[i]);
				i = p;
			}
		}
};

#endif 

