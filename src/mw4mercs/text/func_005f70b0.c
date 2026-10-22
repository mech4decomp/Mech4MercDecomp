/*
 * FUN_005f70b0 (333 B) — __stdcall, RET 0xC.
 *
 * Validates a header signature; if it matches the "empty" sentinel returns
 * NULL. Otherwise builds a resource object via a chain of constructors and
 * virtual calls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004d1f80(void);
extern void *__cdecl FUN_004da920(void);
extern void *__cdecl FUN_005347f0(void);
extern void *__cdecl FUN_00767400(void);
extern void *__cdecl FUN_0041e690(void);
extern void *__cdecl FUN_004cec10(void);
extern void *__cdecl FUN_004d9910(void);
extern void *__cdecl FUN_0041e710(void);
extern void *__cdecl FUN_004d21c0(void);

extern short DAT_007db0ac;
extern short DAT_007db0ae;
extern int DAT_007db098;
extern int DAT_007dab44;
extern int DAT_007dab40;

__declspec(naked) void __stdcall FUN_005f70b0(void)
{
    __asm {
        sub     esp, 0x128
        push    ebx
        mov     ebx, dword ptr [esp + 0x130]
        mov     ax, word ptr [ebx]
        cmp     ax, word ptr [DAT_007db0ac]
        jnz     L1
        mov     cx, word ptr [ebx + 2]
        cmp     cx, word ptr [DAT_007db0ae]
        jnz     L1
        xor     eax, eax
        pop     ebx
        add     esp, 0x128
        ret     0xC
L1:
        push    esi
        push    edi
        push    1
        push    ebx
        lea     ecx, [esp + 0xF8]
        call    FUN_004d1f80
        push    ebx
        call    FUN_004da920
        add     esp, 4
        push    0
        push    -1
        mov     ecx, 0xC
        mov     esi, 0x7B9460
        lea     edi, [esp + 0x18]
        rep movsd
        mov     ecx, dword ptr [esp + 0x144]
        mov     edx, dword ptr [ecx]
        push    2
        push    0
        mov     dword ptr [esp + 0x2C], edx
        mov     edx, dword ptr [ecx + 4]
        mov     ecx, dword ptr [ecx + 8]
        mov     dword ptr [esp + 0x3C], edx
        lea     edx, [esp + 0x20]
        push    edx
        push    ebx
        push    2
        push    eax
        push    0
        push    2
        mov     dword ptr [esp + 0x64], ecx
        push    0x90
        lea     ecx, [esp + 0x8C]
        call    FUN_005347f0
        push    0x8BD5E8
        lea     ecx, [esp + 0xC4]
        call    FUN_00767400
        push    0x8BD5E8
        lea     ecx, [esp + 0xDC]
        call    FUN_00767400
        mov     eax, dword ptr [esp + 0x60]
        push    0
        push    eax
        lea     ecx, [esp + 0x68]
        push    ecx
        lea     ecx, [esp + 0x4C]
        call    FUN_0041e690
        mov     ecx, dword ptr [DAT_007db098]
        call    FUN_004cec10
        mov     dl, byte ptr [eax]
        mov     byte ptr [esp + 0xC], dl
        mov     ax, word ptr [eax + 2]
        push    0
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     edx, [esp + 0x48]
        push    edx
        mov     word ptr [esp + 0x1A], ax
        call    FUN_004d9910
        mov     esi, eax
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [ecx + 0x1C]
        add     esp, 0xC
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx + 0x28]
        mov     eax, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [eax + 0x48]
        lea     ecx, [esp + 0x40]
        call    FUN_0041e710
        lea     ecx, [esp + 0xF0]
        call    FUN_004d21c0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x128
        ret     0xC
    }
}
