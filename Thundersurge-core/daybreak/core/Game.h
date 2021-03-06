#ifndef _GAME_H_
#define _GAME_H_

namespace daybreak {

	namespace core {

		class Game {
		public:
			virtual void init() = 0;
			virtual void update(float delta) = 0;
			virtual void render() = 0;
			virtual bool quit() = 0;
		};
	}
}

#endif