/*
 * FUN_006ad360 (186 B) — __cdecl, RET.
 *
 * Updates a counter/stat: calls FUN_0041edd0, conditionally updates a
 * float via FUN_0050e230/FUN_0050e200, and increments counters.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int DAT_007dab44;                    /* 0x007DAB44 */
extern int DAT_007dab40;                    /* 0x007DAB40 */
extern void __cdecl FUN_0041edd0(void);
extern void __cdecl FUN_0050e230(void);
extern void __cdecl FUN_0050e200(void);

__declspec(naked) void __cdecl FUN_006ad360(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 0x08]
        push    esi
        mov     esi, dword ptr [eax + 0x99c]
        test    esi, esi
        mov     dword ptr [esp + 0x04], 0x3f800000
        jz      l_skip1
        mov     edx, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [edx + 0x04]
        mov     eax, dword ptr [eax + 0x38]
        mov     dword ptr [esp + 0x04], eax
    l_skip1:
        mov     ecx, dword ptr [esp + 0x04]
        push    0x4
        push    ecx
        mov     ecx, dword ptr [esp + 0x18]
        push    0x0
        lea     edx, [esp + 0x18]
        push    edx
        call    FUN_0041edd0
        test    esi, esi
        jz      l_skip2
        mov     eax, dword ptr [esi + 0x1c0]
        push    eax
        call    FUN_0050e230
        fld     dword ptr [esp + 0x10]
        fcomp   st(1)
        add     esp, 0x4
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x41
        jnz     l_skip2
        mov     ecx, dword ptr [esi + 0xe0]
        cmp     dword ptr [ecx + 0x14], 0x6
        jz      l_skip2
        mov     edx, dword ptr [esp + 0x0c]
        push    edx
        call    FUN_0050e200
        fstp    dword ptr [esi + 0x1c0]
        add     esp, 0x4
    l_skip2:
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0x14]
        mov     ecx, dword ptr [esp + 0x20]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x1814]
        mov     edx, dword ptr [eax + ecx*0x4 + 0x848c]
        add     eax, 0x8484
        inc     edx
        mov     dword ptr [eax + ecx*0x4 + 0x08], edx
        inc     dword ptr [eax + 0xc00]
        pop     esi
        pop     ecx
        ret
    }
}
