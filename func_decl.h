#ifndef FUNC_DECL_H_INCLUDED
#define FUNC_DECL_H_INCLUDED

int init();
void draw(void);
void close(void);
void page_zero(void);
void initVars();
void drawIOLights(void);
void toggleOutput(char *io_num, int io_n, int x1, int x2, int y1, int y2);
void render(int x, int y, SDL_Rect* clip, double angle, SDL_Point* center, SDL_RendererFlip flip);
void readVariables(void);
void drawLabels(void);
void writeVariables(void);
void drawPageTitle(int pageNumber);
bool loadIOLights(int value);
void openMenu(void);
void closeMenu(void);
void timestampRefresh(void);
void refreshTouch(void);
void cycleCount(void);
void drawMenuItems();
void drawMenu(void);
void page_main(void);
void page_admin(void);
void page_editor(void);
void page_loader(void);
void page_settings(void);
void page_statusIO(void);
void gotoAdmin(void);
void loadPage(int pageNumber);
void passCheck(void);
void drawGrid(void);

#endif