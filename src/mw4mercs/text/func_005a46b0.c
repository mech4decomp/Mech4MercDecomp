/*
 * FUN_005a46b0 (119 B) — Allocation + initialization function.
 *
 * Allocates 0xA8 bytes, calls FUN_00501a20 with many params,
 * sets vtable at [result+0xA4], stores result in global.
 *
 * __cdecl, no params, no return value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__stdcall FUN_004084d0(int size);
extern void __stdcall FUN_00501a20(void *this, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l);

__declspec(naked) void __stdcall FUN_005a46b0(void)
{
    

extern int DAT_007f25bc;
extern int DAT_007f25c0;
extern int DAT_007f204c;
__asm {
push    esi
        push    0xa8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      null_result
        mov eax, dword ptr [DAT_007f25bc]
        mov ecx, dword ptr [DAT_007f25c0]
        push    0x00502c60
        push    0x005028b0
        push    0x0066a3c0
        push    0x0062ec80
        push    0x0066a150
        push    eax
        push    0x0062df30
        push    0x005a4760
        push    0
        push    0
        push    ecx
        push    0x0078432c
        push    0x42e
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xa4], 0x006039e0
        mov dword ptr [DAT_007f204c], esi
        pop     esi
        ret
null_result:
        mov dword ptr [DAT_007f204c], 0x0
        pop     esi
        ret
    }


}
