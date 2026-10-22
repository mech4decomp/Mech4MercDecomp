/*
 * FUN_0059B680 — __stdcall factory function.
 * Allocates a new object of size 0x20, initializes it via FUN_004D5C10,
 * and stores the result in a global.
 *
 * CFLAGS: /O1 (pinned)
 */

#include <mw4/common.h>

/* External globals */
extern void *g_unk_7DC140;   /* 0x007DC140 */
extern void *g_unk_7F1FF8;   /* 0x007F1FF8 */

/* External functions */
extern void *__stdcall alloc_0x20(int size);
extern void *__fastcall ctor_4d5c10(void *this, int arg1, const char *arg2, int arg3, int arg4, void *arg5);

__declspec(naked) void __stdcall func_0059B680(void)
{
    

extern void __cdecl FUN_1004084d3(void);
extern int DAT_007dc140;
extern void __cdecl FUN_1004d5bf0(void);
extern int DAT_007f1ff8;
__asm {
push    0x20
        call FUN_1004084d3
        add     esp, 4
        test    eax, eax
        je      L_alloc_fail
        mov ecx, dword ptr [DAT_007dc140]
        push    0
        push    0
        push    ecx
        push    0x00783878
        push    0x4BA
        mov     ecx, eax
        call FUN_1004d5bf0
        mov dword ptr [DAT_007f1ff8], eax
        ret
L_alloc_fail:
        mov dword ptr [DAT_007f1ff8], 0x0
        ret
    }


}
