else if (str.substr(0, 7) == "/spawn ")
						{

						if (static_cast<PlayerInfo*>(peer->data)->adminLevel == 7) {
							//right same line player 
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 1 : -1)), static_cast<PlayerInfo*>(peer->data)->y, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 2 : -2)), static_cast<PlayerInfo*>(peer->data)->y, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 3 : -3)), static_cast<PlayerInfo*>(peer->data)->y, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 4 : -4)), static_cast<PlayerInfo*>(peer->data)->y, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 5 : -5)), static_cast<PlayerInfo*>(peer->data)->y, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 6 : -6)), static_cast<PlayerInfo*>(peer->data)->y, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 7 : -7)), static_cast<PlayerInfo*>(peer->data)->y, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 8 : -8)), static_cast<PlayerInfo*>(peer->data)->y, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 9 : -9)), static_cast<PlayerInfo*>(peer->data)->y, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 10 : -10)), static_cast<PlayerInfo*>(peer->data)->y, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);

							//left same line player 
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -1 : 1)), static_cast<PlayerInfo*>(peer->data)->y, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -2 : 2)), static_cast<PlayerInfo*>(peer->data)->y, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -3 : 3)), static_cast<PlayerInfo*>(peer->data)->y, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -4 : 4)), static_cast<PlayerInfo*>(peer->data)->y, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -5 : 5)), static_cast<PlayerInfo*>(peer->data)->y, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -6 : 6)), static_cast<PlayerInfo*>(peer->data)->y, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -7 : 7)), static_cast<PlayerInfo*>(peer->data)->y, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -8 : 8)), static_cast<PlayerInfo*>(peer->data)->y, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -9 : 9)), static_cast<PlayerInfo*>(peer->data)->y, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -10 : 10)), static_cast<PlayerInfo*>(peer->data)->y, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);

							//up lr 1


							//right
							/*0*/ DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 0 : 0)), static_cast<PlayerInfo*>(peer->data)->y - 27, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 1 : -1)), static_cast<PlayerInfo*>(peer->data)->y - 27, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 2 : -2)), static_cast<PlayerInfo*>(peer->data)->y - 27, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 3 : -3)), static_cast<PlayerInfo*>(peer->data)->y - 27, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 4 : -4)), static_cast<PlayerInfo*>(peer->data)->y - 27, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 5 : -5)), static_cast<PlayerInfo*>(peer->data)->y - 27, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 6 : -6)), static_cast<PlayerInfo*>(peer->data)->y - 27, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 7 : -7)), static_cast<PlayerInfo*>(peer->data)->y - 27, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 8 : -8)), static_cast<PlayerInfo*>(peer->data)->y - 27, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 9 : -9)), static_cast<PlayerInfo*>(peer->data)->y - 27, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 10 : -10)), static_cast<PlayerInfo*>(peer->data)->y - 27, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							//left
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -1 : 1)), static_cast<PlayerInfo*>(peer->data)->y - 27, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -2 : 2)), static_cast<PlayerInfo*>(peer->data)->y - 27, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -3 : 3)), static_cast<PlayerInfo*>(peer->data)->y - 27, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -4 : 4)), static_cast<PlayerInfo*>(peer->data)->y - 27, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -5 : 5)), static_cast<PlayerInfo*>(peer->data)->y - 27, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -6 : 6)), static_cast<PlayerInfo*>(peer->data)->y - 27, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -7 : 7)), static_cast<PlayerInfo*>(peer->data)->y - 27, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -8 : 8)), static_cast<PlayerInfo*>(peer->data)->y - 27, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -9 : 9)), static_cast<PlayerInfo*>(peer->data)->y - 27, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -10 : 10)), static_cast<PlayerInfo*>(peer->data)->y - 27, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);

							//up lr 2


							//right
							/*0*/ DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 0 : 0)), static_cast<PlayerInfo*>(peer->data)->y - 54, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 1 : -1)), static_cast<PlayerInfo*>(peer->data)->y - 54, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 2 : -2)), static_cast<PlayerInfo*>(peer->data)->y - 54, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 3 : -3)), static_cast<PlayerInfo*>(peer->data)->y - 54, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 4 : -4)), static_cast<PlayerInfo*>(peer->data)->y - 54, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 5 : -5)), static_cast<PlayerInfo*>(peer->data)->y - 54, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 6 : -6)), static_cast<PlayerInfo*>(peer->data)->y - 54, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 7 : -7)), static_cast<PlayerInfo*>(peer->data)->y - 54, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 8 : -8)), static_cast<PlayerInfo*>(peer->data)->y - 54, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 9 : -9)), static_cast<PlayerInfo*>(peer->data)->y - 54, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 10 : -10)), static_cast<PlayerInfo*>(peer->data)->y - 54, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							//left
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -1 : 1)), static_cast<PlayerInfo*>(peer->data)->y - 54, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -2 : 2)), static_cast<PlayerInfo*>(peer->data)->y - 54, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -3 : 3)), static_cast<PlayerInfo*>(peer->data)->y - 54, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -4 : 4)), static_cast<PlayerInfo*>(peer->data)->y - 54, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -5 : 5)), static_cast<PlayerInfo*>(peer->data)->y - 54, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -6 : 6)), static_cast<PlayerInfo*>(peer->data)->y - 54, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -7 : 7)), static_cast<PlayerInfo*>(peer->data)->y - 54, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -8 : 8)), static_cast<PlayerInfo*>(peer->data)->y - 54, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -9 : 9)), static_cast<PlayerInfo*>(peer->data)->y - 54, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -10 : 10)), static_cast<PlayerInfo*>(peer->data)->y - 54, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);

							//up lr 3


							//right
							/*0*/ DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 0 : 0)), static_cast<PlayerInfo*>(peer->data)->y - 81, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 1 : -1)), static_cast<PlayerInfo*>(peer->data)->y - 81, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 2 : -2)), static_cast<PlayerInfo*>(peer->data)->y - 81, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 3 : -3)), static_cast<PlayerInfo*>(peer->data)->y - 81, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 4 : -4)), static_cast<PlayerInfo*>(peer->data)->y - 81, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 5 : -5)), static_cast<PlayerInfo*>(peer->data)->y - 81, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 6 : -6)), static_cast<PlayerInfo*>(peer->data)->y - 81, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 7 : -7)), static_cast<PlayerInfo*>(peer->data)->y - 81, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 8 : -8)), static_cast<PlayerInfo*>(peer->data)->y - 81, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 9 : -9)), static_cast<PlayerInfo*>(peer->data)->y - 81, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 10 : -10)), static_cast<PlayerInfo*>(peer->data)->y - 81, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							//left
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -1 : 1)), static_cast<PlayerInfo*>(peer->data)->y - 81, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -2 : 2)), static_cast<PlayerInfo*>(peer->data)->y - 81, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -3 : 3)), static_cast<PlayerInfo*>(peer->data)->y - 81, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -4 : 4)), static_cast<PlayerInfo*>(peer->data)->y - 81, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -5 : 5)), static_cast<PlayerInfo*>(peer->data)->y - 81, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -6 : 6)), static_cast<PlayerInfo*>(peer->data)->y - 81, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -7 : 7)), static_cast<PlayerInfo*>(peer->data)->y - 81, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -8 : 8)), static_cast<PlayerInfo*>(peer->data)->y - 81, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -9 : 9)), static_cast<PlayerInfo*>(peer->data)->y - 81, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -10 : 10)), static_cast<PlayerInfo*>(peer->data)->y - 81, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);


							//up lr 4


							//right
							/*0*/ DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 0 : 0)), static_cast<PlayerInfo*>(peer->data)->y - 108, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 1 : -1)), static_cast<PlayerInfo*>(peer->data)->y - 108, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 2 : -2)), static_cast<PlayerInfo*>(peer->data)->y - 108, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 3 : -3)), static_cast<PlayerInfo*>(peer->data)->y - 108, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 4 : -4)), static_cast<PlayerInfo*>(peer->data)->y - 108, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 5 : -5)), static_cast<PlayerInfo*>(peer->data)->y - 108, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 6 : -6)), static_cast<PlayerInfo*>(peer->data)->y - 108, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 7 : -7)), static_cast<PlayerInfo*>(peer->data)->y - 108, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 8 : -8)), static_cast<PlayerInfo*>(peer->data)->y - 108, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 9 : -9)), static_cast<PlayerInfo*>(peer->data)->y - 108, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 10 : -10)), static_cast<PlayerInfo*>(peer->data)->y - 108, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							//left
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -1 : 1)), static_cast<PlayerInfo*>(peer->data)->y - 108, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -2 : 2)), static_cast<PlayerInfo*>(peer->data)->y - 108, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -3 : 3)), static_cast<PlayerInfo*>(peer->data)->y - 108, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -4 : 4)), static_cast<PlayerInfo*>(peer->data)->y - 108, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -5 : 5)), static_cast<PlayerInfo*>(peer->data)->y - 108, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -6 : 6)), static_cast<PlayerInfo*>(peer->data)->y - 108, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -7 : 7)), static_cast<PlayerInfo*>(peer->data)->y - 108, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -8 : 8)), static_cast<PlayerInfo*>(peer->data)->y - 108, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -9 : 9)), static_cast<PlayerInfo*>(peer->data)->y - 108, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -10 : 10)), static_cast<PlayerInfo*>(peer->data)->y - 108, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);

							//up lr 5


							//right
							/*0*/ DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 0 : 0)), static_cast<PlayerInfo*>(peer->data)->y - 135, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 1 : -1)), static_cast<PlayerInfo*>(peer->data)->y - 135, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 2 : -2)), static_cast<PlayerInfo*>(peer->data)->y - 135, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 3 : -3)), static_cast<PlayerInfo*>(peer->data)->y - 135, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 4 : -4)), static_cast<PlayerInfo*>(peer->data)->y - 135, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 5 : -5)), static_cast<PlayerInfo*>(peer->data)->y - 135, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 6 : -6)), static_cast<PlayerInfo*>(peer->data)->y - 135, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 7 : -7)), static_cast<PlayerInfo*>(peer->data)->y - 135, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 8 : -8)), static_cast<PlayerInfo*>(peer->data)->y - 135, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 9 : -9)), static_cast<PlayerInfo*>(peer->data)->y - 135, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 10 : -10)), static_cast<PlayerInfo*>(peer->data)->y - 135, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							//left
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -1 : 1)), static_cast<PlayerInfo*>(peer->data)->y - 135, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -2 : 2)), static_cast<PlayerInfo*>(peer->data)->y - 135, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -3 : 3)), static_cast<PlayerInfo*>(peer->data)->y - 135, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -4 : 4)), static_cast<PlayerInfo*>(peer->data)->y - 135, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -5 : 5)), static_cast<PlayerInfo*>(peer->data)->y - 135, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -6 : 6)), static_cast<PlayerInfo*>(peer->data)->y - 135, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -7 : 7)), static_cast<PlayerInfo*>(peer->data)->y - 135, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -8 : 8)), static_cast<PlayerInfo*>(peer->data)->y - 135, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -9 : 9)), static_cast<PlayerInfo*>(peer->data)->y - 135, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -10 : 10)), static_cast<PlayerInfo*>(peer->data)->y - 135, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);

							//up lr 6


							//right
							/*0*/ DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 0 : 0)), static_cast<PlayerInfo*>(peer->data)->y - 162, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 1 : -1)), static_cast<PlayerInfo*>(peer->data)->y - 162, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 2 : -2)), static_cast<PlayerInfo*>(peer->data)->y - 162, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 3 : -3)), static_cast<PlayerInfo*>(peer->data)->y - 162, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 4 : -4)), static_cast<PlayerInfo*>(peer->data)->y - 162, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 5 : -5)), static_cast<PlayerInfo*>(peer->data)->y - 162, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 6 : -6)), static_cast<PlayerInfo*>(peer->data)->y - 162, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 7 : -7)), static_cast<PlayerInfo*>(peer->data)->y - 162, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 8 : -8)), static_cast<PlayerInfo*>(peer->data)->y - 162, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 9 : -9)), static_cast<PlayerInfo*>(peer->data)->y - 162, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 10 : -10)), static_cast<PlayerInfo*>(peer->data)->y - 162, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							//left
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -1 : 1)), static_cast<PlayerInfo*>(peer->data)->y - 162, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -2 : 2)), static_cast<PlayerInfo*>(peer->data)->y - 162, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -3 : 3)), static_cast<PlayerInfo*>(peer->data)->y - 162, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -4 : 4)), static_cast<PlayerInfo*>(peer->data)->y - 162, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -5 : 5)), static_cast<PlayerInfo*>(peer->data)->y - 162, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -6 : 6)), static_cast<PlayerInfo*>(peer->data)->y - 162, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -7 : 7)), static_cast<PlayerInfo*>(peer->data)->y - 162, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -8 : 8)), static_cast<PlayerInfo*>(peer->data)->y - 162, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -9 : 9)), static_cast<PlayerInfo*>(peer->data)->y - 162, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -10 : 10)), static_cast<PlayerInfo*>(peer->data)->y - 162, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);

							//up lr 7


							//right
							/*0*/ DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 0 : 0)), static_cast<PlayerInfo*>(peer->data)->y - 189, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 1 : -1)), static_cast<PlayerInfo*>(peer->data)->y - 189, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 2 : -2)), static_cast<PlayerInfo*>(peer->data)->y - 189, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 3 : -3)), static_cast<PlayerInfo*>(peer->data)->y - 189, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 4 : -4)), static_cast<PlayerInfo*>(peer->data)->y - 189, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 5 : -5)), static_cast<PlayerInfo*>(peer->data)->y - 189, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 6 : -6)), static_cast<PlayerInfo*>(peer->data)->y - 189, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 7 : -7)), static_cast<PlayerInfo*>(peer->data)->y - 189, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 8 : -8)), static_cast<PlayerInfo*>(peer->data)->y - 189, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 9 : -9)), static_cast<PlayerInfo*>(peer->data)->y - 189, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 10 : -10)), static_cast<PlayerInfo*>(peer->data)->y - 189, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							//left
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -1 : 1)), static_cast<PlayerInfo*>(peer->data)->y - 189, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -2 : 2)), static_cast<PlayerInfo*>(peer->data)->y - 189, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -3 : 3)), static_cast<PlayerInfo*>(peer->data)->y - 189, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -4 : 4)), static_cast<PlayerInfo*>(peer->data)->y - 189, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -5 : 5)), static_cast<PlayerInfo*>(peer->data)->y - 189, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -6 : 6)), static_cast<PlayerInfo*>(peer->data)->y - 189, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -7 : 7)), static_cast<PlayerInfo*>(peer->data)->y - 189, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -8 : 8)), static_cast<PlayerInfo*>(peer->data)->y - 189, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -9 : 9)), static_cast<PlayerInfo*>(peer->data)->y - 189, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -10 : 10)), static_cast<PlayerInfo*>(peer->data)->y - 189, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);

							//up lr 8


							//right
							/*0*/ DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 0 : 0)), static_cast<PlayerInfo*>(peer->data)->y - 216, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 1 : -1)), static_cast<PlayerInfo*>(peer->data)->y - 216, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 2 : -2)), static_cast<PlayerInfo*>(peer->data)->y - 216, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 3 : -3)), static_cast<PlayerInfo*>(peer->data)->y - 216, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 4 : -4)), static_cast<PlayerInfo*>(peer->data)->y - 216, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 5 : -5)), static_cast<PlayerInfo*>(peer->data)->y - 216, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 6 : -6)), static_cast<PlayerInfo*>(peer->data)->y - 216, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 7 : -7)), static_cast<PlayerInfo*>(peer->data)->y - 216, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 8 : -8)), static_cast<PlayerInfo*>(peer->data)->y - 216, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 9 : -9)), static_cast<PlayerInfo*>(peer->data)->y - 216, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 10 : -10)), static_cast<PlayerInfo*>(peer->data)->y - 216, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							//left
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -1 : 1)), static_cast<PlayerInfo*>(peer->data)->y - 216, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -2 : 2)), static_cast<PlayerInfo*>(peer->data)->y - 216, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -3 : 3)), static_cast<PlayerInfo*>(peer->data)->y - 216, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -4 : 4)), static_cast<PlayerInfo*>(peer->data)->y - 216, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -5 : 5)), static_cast<PlayerInfo*>(peer->data)->y - 216, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -6 : 6)), static_cast<PlayerInfo*>(peer->data)->y - 216, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -7 : 7)), static_cast<PlayerInfo*>(peer->data)->y - 216, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -8 : 8)), static_cast<PlayerInfo*>(peer->data)->y - 216, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -9 : 9)), static_cast<PlayerInfo*>(peer->data)->y - 216, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -10 : 10)), static_cast<PlayerInfo*>(peer->data)->y - 216, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);

							//up lr 9


							//right
							/*0*/ DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 0 : 0)), static_cast<PlayerInfo*>(peer->data)->y - 243, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 1 : -1)), static_cast<PlayerInfo*>(peer->data)->y - 243, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 2 : -2)), static_cast<PlayerInfo*>(peer->data)->y - 243, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 3 : -3)), static_cast<PlayerInfo*>(peer->data)->y - 243, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 4 : -4)), static_cast<PlayerInfo*>(peer->data)->y - 243, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 5 : -5)), static_cast<PlayerInfo*>(peer->data)->y - 243, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 6 : -6)), static_cast<PlayerInfo*>(peer->data)->y - 243, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 7 : -7)), static_cast<PlayerInfo*>(peer->data)->y - 243, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 8 : -8)), static_cast<PlayerInfo*>(peer->data)->y - 243, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 9 : -9)), static_cast<PlayerInfo*>(peer->data)->y - 243, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 10 : -10)), static_cast<PlayerInfo*>(peer->data)->y - 243, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							//left
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -1 : 1)), static_cast<PlayerInfo*>(peer->data)->y - 243, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -2 : 2)), static_cast<PlayerInfo*>(peer->data)->y - 243, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -3 : 3)), static_cast<PlayerInfo*>(peer->data)->y - 243, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -4 : 4)), static_cast<PlayerInfo*>(peer->data)->y - 243, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -5 : 5)), static_cast<PlayerInfo*>(peer->data)->y - 243, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -6 : 6)), static_cast<PlayerInfo*>(peer->data)->y - 243, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -7 : 7)), static_cast<PlayerInfo*>(peer->data)->y - 243, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -8 : 8)), static_cast<PlayerInfo*>(peer->data)->y - 243, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -9 : 9)), static_cast<PlayerInfo*>(peer->data)->y - 243, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -10 : 10)), static_cast<PlayerInfo*>(peer->data)->y - 243, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);

							//up lr 10


							//right
							/*0*/ DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 0 : 0)), static_cast<PlayerInfo*>(peer->data)->y - 270, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 1 : -1)), static_cast<PlayerInfo*>(peer->data)->y - 270, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 2 : -2)), static_cast<PlayerInfo*>(peer->data)->y - 270, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 3 : -3)), static_cast<PlayerInfo*>(peer->data)->y - 270, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 4 : -4)), static_cast<PlayerInfo*>(peer->data)->y - 270, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 5 : -5)), static_cast<PlayerInfo*>(peer->data)->y - 270, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 6 : -6)), static_cast<PlayerInfo*>(peer->data)->y - 270, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 7 : -7)), static_cast<PlayerInfo*>(peer->data)->y - 270, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 8 : -8)), static_cast<PlayerInfo*>(peer->data)->y - 270, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 9 : -9)), static_cast<PlayerInfo*>(peer->data)->y - 270, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 10 : -10)), static_cast<PlayerInfo*>(peer->data)->y - 270, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							//left
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -1 : 1)), static_cast<PlayerInfo*>(peer->data)->y - 270, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -2 : 2)), static_cast<PlayerInfo*>(peer->data)->y - 270, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -3 : 3)), static_cast<PlayerInfo*>(peer->data)->y - 270, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -4 : 4)), static_cast<PlayerInfo*>(peer->data)->y - 270, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -5 : 5)), static_cast<PlayerInfo*>(peer->data)->y - 270, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -6 : 6)), static_cast<PlayerInfo*>(peer->data)->y - 270, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -7 : 7)), static_cast<PlayerInfo*>(peer->data)->y - 270, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -8 : 8)), static_cast<PlayerInfo*>(peer->data)->y - 270, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -9 : 9)), static_cast<PlayerInfo*>(peer->data)->y - 270, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -10 : 10)), static_cast<PlayerInfo*>(peer->data)->y - 270, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);




							//down lr 1

							//right
							/* 0 */ DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 0 : 0)), static_cast<PlayerInfo*>(peer->data)->y + 35, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 1 : -1)), static_cast<PlayerInfo*>(peer->data)->y + 35, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 2 : -2)), static_cast<PlayerInfo*>(peer->data)->y + 35, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 3 : -3)), static_cast<PlayerInfo*>(peer->data)->y + 35, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 4 : -4)), static_cast<PlayerInfo*>(peer->data)->y + 35, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 5 : -5)), static_cast<PlayerInfo*>(peer->data)->y + 35, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 6 : -6)), static_cast<PlayerInfo*>(peer->data)->y + 35, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 7 : -7)), static_cast<PlayerInfo*>(peer->data)->y + 35, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 8 : -8)), static_cast<PlayerInfo*>(peer->data)->y + 35, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 9 : -9)), static_cast<PlayerInfo*>(peer->data)->y + 35, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 10 : -10)), static_cast<PlayerInfo*>(peer->data)->y + 35, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);




							//left
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -1 : 1)), static_cast<PlayerInfo*>(peer->data)->y + 35, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -2 : 2)), static_cast<PlayerInfo*>(peer->data)->y + 35, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -3 : 3)), static_cast<PlayerInfo*>(peer->data)->y + 35, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -4 : 4)), static_cast<PlayerInfo*>(peer->data)->y + 35, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -5 : 5)), static_cast<PlayerInfo*>(peer->data)->y + 35, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -6 : 6)), static_cast<PlayerInfo*>(peer->data)->y + 35, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -7 : 7)), static_cast<PlayerInfo*>(peer->data)->y + 35, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -8 : 8)), static_cast<PlayerInfo*>(peer->data)->y + 35, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -9 : 9)), static_cast<PlayerInfo*>(peer->data)->y + 35, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -10 : 10)), static_cast<PlayerInfo*>(peer->data)->y + 35, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);

							//down lr 2

							//right
							/* 0 */ DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 0 : 0)), static_cast<PlayerInfo*>(peer->data)->y + 70, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 1 : -1)), static_cast<PlayerInfo*>(peer->data)->y + 70, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 2 : -2)), static_cast<PlayerInfo*>(peer->data)->y + 70, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 3 : -3)), static_cast<PlayerInfo*>(peer->data)->y + 70, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 4 : -4)), static_cast<PlayerInfo*>(peer->data)->y + 70, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 5 : -5)), static_cast<PlayerInfo*>(peer->data)->y + 70, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 6 : -6)), static_cast<PlayerInfo*>(peer->data)->y + 70, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 7 : -7)), static_cast<PlayerInfo*>(peer->data)->y + 70, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 8 : -8)), static_cast<PlayerInfo*>(peer->data)->y + 70, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 9 : -9)), static_cast<PlayerInfo*>(peer->data)->y + 70, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 10 : -10)), static_cast<PlayerInfo*>(peer->data)->y + 70, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);




							//left
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -1 : 1)), static_cast<PlayerInfo*>(peer->data)->y + 70, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -2 : 2)), static_cast<PlayerInfo*>(peer->data)->y + 70, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -3 : 3)), static_cast<PlayerInfo*>(peer->data)->y + 70, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -4 : 4)), static_cast<PlayerInfo*>(peer->data)->y + 70, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -5 : 5)), static_cast<PlayerInfo*>(peer->data)->y + 70, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -6 : 6)), static_cast<PlayerInfo*>(peer->data)->y + 70, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -7 : 7)), static_cast<PlayerInfo*>(peer->data)->y + 70, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -8 : 8)), static_cast<PlayerInfo*>(peer->data)->y + 70, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -9 : 9)), static_cast<PlayerInfo*>(peer->data)->y + 70, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -10 : 10)), static_cast<PlayerInfo*>(peer->data)->y + 70, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);

							//down lr 3

							//right
							/* 0 */ DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 0 : 0)), static_cast<PlayerInfo*>(peer->data)->y + 105, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 1 : -1)), static_cast<PlayerInfo*>(peer->data)->y + 105, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 2 : -2)), static_cast<PlayerInfo*>(peer->data)->y + 105, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 3 : -3)), static_cast<PlayerInfo*>(peer->data)->y + 105, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 4 : -4)), static_cast<PlayerInfo*>(peer->data)->y + 105, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 5 : -5)), static_cast<PlayerInfo*>(peer->data)->y + 105, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 6 : -6)), static_cast<PlayerInfo*>(peer->data)->y + 105, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 7 : -7)), static_cast<PlayerInfo*>(peer->data)->y + 105, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 8 : -8)), static_cast<PlayerInfo*>(peer->data)->y + 105, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 9 : -9)), static_cast<PlayerInfo*>(peer->data)->y + 105, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 10 : -10)), static_cast<PlayerInfo*>(peer->data)->y + 105, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);




							//left
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -1 : 1)), static_cast<PlayerInfo*>(peer->data)->y + 105, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -2 : 2)), static_cast<PlayerInfo*>(peer->data)->y + 105, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -3 : 3)), static_cast<PlayerInfo*>(peer->data)->y + 105, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -4 : 4)), static_cast<PlayerInfo*>(peer->data)->y + 105, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -5 : 5)), static_cast<PlayerInfo*>(peer->data)->y + 105, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -6 : 6)), static_cast<PlayerInfo*>(peer->data)->y + 105, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -7 : 7)), static_cast<PlayerInfo*>(peer->data)->y + 105, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -8 : 8)), static_cast<PlayerInfo*>(peer->data)->y + 105, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -9 : 9)), static_cast<PlayerInfo*>(peer->data)->y + 105, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -10 : 10)), static_cast<PlayerInfo*>(peer->data)->y + 105, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);

							//down lr 4

							//right
							/* 0 */ DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 0 : 0)), static_cast<PlayerInfo*>(peer->data)->y + 140, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 1 : -1)), static_cast<PlayerInfo*>(peer->data)->y + 140, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 2 : -2)), static_cast<PlayerInfo*>(peer->data)->y + 140, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 3 : -3)), static_cast<PlayerInfo*>(peer->data)->y + 140, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 4 : -4)), static_cast<PlayerInfo*>(peer->data)->y + 140, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 5 : -5)), static_cast<PlayerInfo*>(peer->data)->y + 140, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 6 : -6)), static_cast<PlayerInfo*>(peer->data)->y + 140, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 7 : -7)), static_cast<PlayerInfo*>(peer->data)->y + 140, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 8 : -8)), static_cast<PlayerInfo*>(peer->data)->y + 140, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 9 : -9)), static_cast<PlayerInfo*>(peer->data)->y + 140, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 10 : -10)), static_cast<PlayerInfo*>(peer->data)->y + 140, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);




							//left
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -1 : 1)), static_cast<PlayerInfo*>(peer->data)->y + 140, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -2 : 2)), static_cast<PlayerInfo*>(peer->data)->y + 140, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -3 : 3)), static_cast<PlayerInfo*>(peer->data)->y + 140, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -4 : 4)), static_cast<PlayerInfo*>(peer->data)->y + 140, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -5 : 5)), static_cast<PlayerInfo*>(peer->data)->y + 140, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -6 : 6)), static_cast<PlayerInfo*>(peer->data)->y + 140, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -7 : 7)), static_cast<PlayerInfo*>(peer->data)->y + 140, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -8 : 8)), static_cast<PlayerInfo*>(peer->data)->y + 140, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -9 : 9)), static_cast<PlayerInfo*>(peer->data)->y + 140, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -10 : 10)), static_cast<PlayerInfo*>(peer->data)->y + 140, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);

							//down lr 5

							//right
							/* 0 */ DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 0 : 0)), static_cast<PlayerInfo*>(peer->data)->y + 175, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 1 : -1)), static_cast<PlayerInfo*>(peer->data)->y + 175, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 2 : -2)), static_cast<PlayerInfo*>(peer->data)->y + 175, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 3 : -3)), static_cast<PlayerInfo*>(peer->data)->y + 175, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 4 : -4)), static_cast<PlayerInfo*>(peer->data)->y + 175, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 5 : -5)), static_cast<PlayerInfo*>(peer->data)->y + 175, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 6 : -6)), static_cast<PlayerInfo*>(peer->data)->y + 175, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 7 : -7)), static_cast<PlayerInfo*>(peer->data)->y + 175, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 8 : -8)), static_cast<PlayerInfo*>(peer->data)->y + 175, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 9 : -9)), static_cast<PlayerInfo*>(peer->data)->y + 175, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 10 : -10)), static_cast<PlayerInfo*>(peer->data)->y + 175, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);




							//left
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -1 : 1)), static_cast<PlayerInfo*>(peer->data)->y + 175, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -2 : 2)), static_cast<PlayerInfo*>(peer->data)->y + 175, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -3 : 3)), static_cast<PlayerInfo*>(peer->data)->y + 175, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -4 : 4)), static_cast<PlayerInfo*>(peer->data)->y + 175, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -5 : 5)), static_cast<PlayerInfo*>(peer->data)->y + 175, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -6 : 6)), static_cast<PlayerInfo*>(peer->data)->y + 175, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -7 : 7)), static_cast<PlayerInfo*>(peer->data)->y + 175, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -8 : 8)), static_cast<PlayerInfo*>(peer->data)->y + 175, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -9 : 9)), static_cast<PlayerInfo*>(peer->data)->y + 175, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -10 : 10)), static_cast<PlayerInfo*>(peer->data)->y + 175, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);

							//down lr 6

							//right
							/* 0 */ DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 0 : 0)), static_cast<PlayerInfo*>(peer->data)->y + 210, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 1 : -1)), static_cast<PlayerInfo*>(peer->data)->y + 210, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 2 : -2)), static_cast<PlayerInfo*>(peer->data)->y + 210, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 3 : -3)), static_cast<PlayerInfo*>(peer->data)->y + 210, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 4 : -4)), static_cast<PlayerInfo*>(peer->data)->y + 210, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 5 : -5)), static_cast<PlayerInfo*>(peer->data)->y + 210, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 6 : -6)), static_cast<PlayerInfo*>(peer->data)->y + 210, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 7 : -7)), static_cast<PlayerInfo*>(peer->data)->y + 210, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 8 : -8)), static_cast<PlayerInfo*>(peer->data)->y + 210, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 9 : -9)), static_cast<PlayerInfo*>(peer->data)->y + 210, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 10 : -10)), static_cast<PlayerInfo*>(peer->data)->y + 210, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);




							//left
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -1 : 1)), static_cast<PlayerInfo*>(peer->data)->y + 210, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -2 : 2)), static_cast<PlayerInfo*>(peer->data)->y + 210, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -3 : 3)), static_cast<PlayerInfo*>(peer->data)->y + 210, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -4 : 4)), static_cast<PlayerInfo*>(peer->data)->y + 210, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -5 : 5)), static_cast<PlayerInfo*>(peer->data)->y + 210, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -6 : 6)), static_cast<PlayerInfo*>(peer->data)->y + 210, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -7 : 7)), static_cast<PlayerInfo*>(peer->data)->y + 210, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -8 : 8)), static_cast<PlayerInfo*>(peer->data)->y + 210, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -9 : 9)), static_cast<PlayerInfo*>(peer->data)->y + 210, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -10 : 10)), static_cast<PlayerInfo*>(peer->data)->y + 210, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);

							//down lr 7

							//right
							/* 0 */ DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 0 : 0)), static_cast<PlayerInfo*>(peer->data)->y + 245, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 1 : -1)), static_cast<PlayerInfo*>(peer->data)->y + 245, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 2 : -2)), static_cast<PlayerInfo*>(peer->data)->y + 245, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 3 : -3)), static_cast<PlayerInfo*>(peer->data)->y + 245, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 4 : -4)), static_cast<PlayerInfo*>(peer->data)->y + 245, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 5 : -5)), static_cast<PlayerInfo*>(peer->data)->y + 245, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 6 : -6)), static_cast<PlayerInfo*>(peer->data)->y + 245, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 7 : -7)), static_cast<PlayerInfo*>(peer->data)->y + 245, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 8 : -8)), static_cast<PlayerInfo*>(peer->data)->y + 245, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 9 : -9)), static_cast<PlayerInfo*>(peer->data)->y + 245, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 10 : -10)), static_cast<PlayerInfo*>(peer->data)->y + 245, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);




							//left
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -1 : 1)), static_cast<PlayerInfo*>(peer->data)->y + 245, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -2 : 2)), static_cast<PlayerInfo*>(peer->data)->y + 245, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -3 : 3)), static_cast<PlayerInfo*>(peer->data)->y + 245, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -4 : 4)), static_cast<PlayerInfo*>(peer->data)->y + 245, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -5 : 5)), static_cast<PlayerInfo*>(peer->data)->y + 245, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -6 : 6)), static_cast<PlayerInfo*>(peer->data)->y + 245, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -7 : 7)), static_cast<PlayerInfo*>(peer->data)->y + 245, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -8 : 8)), static_cast<PlayerInfo*>(peer->data)->y + 245, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -9 : 9)), static_cast<PlayerInfo*>(peer->data)->y + 245, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -10 : 10)), static_cast<PlayerInfo*>(peer->data)->y + 245, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);

							//down lr 8

							//right
							/* 0 */ DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 0 : 0)), static_cast<PlayerInfo*>(peer->data)->y + 280, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 1 : -1)), static_cast<PlayerInfo*>(peer->data)->y + 280, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 2 : -2)), static_cast<PlayerInfo*>(peer->data)->y + 280, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 3 : -3)), static_cast<PlayerInfo*>(peer->data)->y + 280, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 4 : -4)), static_cast<PlayerInfo*>(peer->data)->y + 280, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 5 : -5)), static_cast<PlayerInfo*>(peer->data)->y + 280, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 6 : -6)), static_cast<PlayerInfo*>(peer->data)->y + 280, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 7 : -7)), static_cast<PlayerInfo*>(peer->data)->y + 280, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 8 : -8)), static_cast<PlayerInfo*>(peer->data)->y + 280, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 9 : -9)), static_cast<PlayerInfo*>(peer->data)->y + 280, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 10 : -10)), static_cast<PlayerInfo*>(peer->data)->y + 280, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);




							//left
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -1 : 1)), static_cast<PlayerInfo*>(peer->data)->y + 280, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -2 : 2)), static_cast<PlayerInfo*>(peer->data)->y + 280, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -3 : 3)), static_cast<PlayerInfo*>(peer->data)->y + 280, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -4 : 4)), static_cast<PlayerInfo*>(peer->data)->y + 280, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -5 : 5)), static_cast<PlayerInfo*>(peer->data)->y + 280, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -6 : 6)), static_cast<PlayerInfo*>(peer->data)->y + 280, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -7 : 7)), static_cast<PlayerInfo*>(peer->data)->y + 280, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -8 : 8)), static_cast<PlayerInfo*>(peer->data)->y + 280, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -9 : 9)), static_cast<PlayerInfo*>(peer->data)->y + 280, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -10 : 10)), static_cast<PlayerInfo*>(peer->data)->y + 280, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);

							//down lr 9

							//right
							/* 0 */ DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 0 : 0)), static_cast<PlayerInfo*>(peer->data)->y + 315, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 1 : -1)), static_cast<PlayerInfo*>(peer->data)->y + 315, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 2 : -2)), static_cast<PlayerInfo*>(peer->data)->y + 315, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 3 : -3)), static_cast<PlayerInfo*>(peer->data)->y + 315, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 4 : -4)), static_cast<PlayerInfo*>(peer->data)->y + 315, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 5 : -5)), static_cast<PlayerInfo*>(peer->data)->y + 315, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 6 : -6)), static_cast<PlayerInfo*>(peer->data)->y + 315, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 7 : -7)), static_cast<PlayerInfo*>(peer->data)->y + 315, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 8 : -8)), static_cast<PlayerInfo*>(peer->data)->y + 315, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 9 : -9)), static_cast<PlayerInfo*>(peer->data)->y + 315, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 10 : -10)), static_cast<PlayerInfo*>(peer->data)->y + 315, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);




							//left
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -1 : 1)), static_cast<PlayerInfo*>(peer->data)->y + 315, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -2 : 2)), static_cast<PlayerInfo*>(peer->data)->y + 315, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -3 : 3)), static_cast<PlayerInfo*>(peer->data)->y + 315, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -4 : 4)), static_cast<PlayerInfo*>(peer->data)->y + 315, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -5 : 5)), static_cast<PlayerInfo*>(peer->data)->y + 315, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -6 : 6)), static_cast<PlayerInfo*>(peer->data)->y + 315, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -7 : 7)), static_cast<PlayerInfo*>(peer->data)->y + 315, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -8 : 8)), static_cast<PlayerInfo*>(peer->data)->y + 315, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -9 : 9)), static_cast<PlayerInfo*>(peer->data)->y + 315, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -10 : 10)), static_cast<PlayerInfo*>(peer->data)->y + 315, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);

							//down lr 10

							//right
							/* 0 */ DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 0 : 0)), static_cast<PlayerInfo*>(peer->data)->y + 350, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 1 : -1)), static_cast<PlayerInfo*>(peer->data)->y + 350, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 2 : -2)), static_cast<PlayerInfo*>(peer->data)->y + 350, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 3 : -3)), static_cast<PlayerInfo*>(peer->data)->y + 350, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 4 : -4)), static_cast<PlayerInfo*>(peer->data)->y + 350, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 5 : -5)), static_cast<PlayerInfo*>(peer->data)->y + 350, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 6 : -6)), static_cast<PlayerInfo*>(peer->data)->y + 350, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 7 : -7)), static_cast<PlayerInfo*>(peer->data)->y + 350, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 8 : -8)), static_cast<PlayerInfo*>(peer->data)->y + 350, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 9 : -9)), static_cast<PlayerInfo*>(peer->data)->y + 350, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? 10 : -10)), static_cast<PlayerInfo*>(peer->data)->y + 350, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);




							//left
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -1 : 1)), static_cast<PlayerInfo*>(peer->data)->y + 350, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -2 : 2)), static_cast<PlayerInfo*>(peer->data)->y + 350, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -3 : 3)), static_cast<PlayerInfo*>(peer->data)->y + 350, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -4 : 4)), static_cast<PlayerInfo*>(peer->data)->y + 350, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -5 : 5)), static_cast<PlayerInfo*>(peer->data)->y + 350, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -6 : 6)), static_cast<PlayerInfo*>(peer->data)->y + 350, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -7 : 7)), static_cast<PlayerInfo*>(peer->data)->y + 350, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -8 : 8)), static_cast<PlayerInfo*>(peer->data)->y + 350, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -9 : 9)), static_cast<PlayerInfo*>(peer->data)->y + 350, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);
							DropItem(peer, -1, static_cast<PlayerInfo*>(peer->data)->x + (32 * (static_cast<PlayerInfo*>(peer->data)->isRotatedLeft ? -10 : 10)), static_cast<PlayerInfo*>(peer->data)->y + 350, atoi(str.substr(7, cch.length() - 7 - 1).c_str()), 1, 0);


							int block = atoi(str.substr(7, cch.length() - 7 - 1).c_str());

							GamePacket p = packetEnd(appendString(appendString(createPacket(), "OnConsoleMessage"), "You Spawned `2" + std::to_string(block) + "`o!"));
							ENetPacket* packet = enet_packet_create(p.data,
								p.len,
								ENET_PACKET_FLAG_RELIABLE);
							enet_peer_send(peer, 0, packet);
							delete p.data;



						}
						else
						{
							(peer, "`4This Commands Have Been Disabled!");
						}
						}
