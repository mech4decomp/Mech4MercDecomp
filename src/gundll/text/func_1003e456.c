/* src/modules/gundll/crt/func_1003e456.c — FUN_1003e456 (69 B) __cdecl. */

extern int g_100756a0;
extern void __cdecl FUN_1003e33d(void);

__declspec(naked) void FUN_1003e456(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [esp + 0x8]
        sub     ecx, dword ptr [eax + 0x10]
        sar     ecx, 0xc
        lea     eax, [eax + ecx*8 + 0x18]
        mov     ecx, dword ptr [esp + 0xc]
        movzx   edx, byte ptr [ecx]
        add     dword ptr [eax], edx
        and     byte ptr [ecx], 0x0
        cmp     dword ptr [eax], 0xf0
        mov     dword ptr [eax + 0x4], 0xf1
        jnz     L1
        inc     dword ptr [g_100756a0]
        cmp     dword ptr [g_100756a0], 0x20
        jnz     L1
        push    0x10
        call    FUN_1003e33d
        pop     ecx
    L1:
        ret
    }
}
