/*
 * FUN_005f7200 (322 B) — __thiscall, RET 4.
 *
 * Validates a header signature; if it matches the "empty" sentinel returns
 * NULL. Otherwise builds a resource object via constructors and virtual calls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004da920(void);
extern void *__cdecl FUN_00534630(void);
extern void *__cdecl FUN_004ea0f0(void);
extern void *__cdecl FUN_00428850(void);
extern void *__cdecl FUN_0041e690(void);
extern void *__cdecl FUN_004cec10(void);
extern void *__cdecl FUN_004d9910(void);
extern void *__cdecl FUN_0041e710(void);

extern short DAT_007db0ac;
extern short DAT_007db0ae;
extern int DAT_007db098;
extern int DAT_007dab44;
extern int DAT_007dab40;

__declspec(naked) void __stdcall FUN_005f7200(void)
{
    __asm {
        sub     esp, 0x84
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x90]
        mov     ax, word ptr [esi]
        cmp     ax, word ptr [DAT_007db0ac]
        mov     ebx, ecx
        jnz     L1
        mov     cx, word ptr [esi + 2]
        cmp     cx, word ptr [DAT_007db0ae]
        jnz     L1
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x84
        ret     4
L1:
        push    edi
        push    esi
        call    FUN_004da920
        add     esp, 4
        push    0
        push    2
        push    0x60
        push    2
        lea     ecx, [esp + 0x20]
        mov     edi, eax
        call    FUN_00534630
        push    0x7DC694
        lea     ecx, [esp + 0x2C]
        mov     dword ptr [esp + 0x24], edi
        mov     dword ptr [esp + 0x28], 2
        call    FUN_004ea0f0
        mov     edx, dword ptr [ebx + 0xD8]
        add     edx, 0x80
        push    edx
        lea     ecx, [esp + 0x30]
        call    FUN_00428850
        mov     ax, word ptr [esi]
        mov     edx, dword ptr [esp + 0x10]
        mov     cx, word ptr [esi + 2]
        push    0
        mov     word ptr [esp + 0x68], ax
        push    edx
        lea     eax, [esp + 0x18]
        mov     word ptr [esp + 0x6E], cx
        push    eax
        lea     ecx, [esp + 0x7C]
        mov     dword ptr [esp + 0x68], 1
        mov     dword ptr [esp + 0x6C], 0
        mov     dword ptr [esp + 0x74], 0
        mov     dword ptr [esp + 0x78], 0xFFFFFFFF
        call    FUN_0041e690
        mov     ecx, dword ptr [DAT_007db098]
        call    FUN_004cec10
        mov     cl, byte ptr [eax]
        mov     byte ptr [esp + 0xC], cl
        mov     dx, word ptr [eax + 2]
        push    0
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x78]
        push    ecx
        mov     word ptr [esp + 0x1A], dx
        call    FUN_004d9910
        mov     esi, eax
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [esi + 0x10]
        xor     ecx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [ecx + 0x1C]
        and     edx, 0xFFFFFFEF
        or      edx, 8
        add     esp, 0xC
        xor     ecx, 0x85739531
        mov     dword ptr [esi + 0x10], edx
        mov     edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx + 0x28]
        mov     eax, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [eax + 0x48]
        lea     ecx, [esp + 0x70]
        call    FUN_0041e710
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x84
        ret     4
    }
}
