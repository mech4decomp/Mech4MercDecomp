/*
 * FUN_005dd110 (179 B) — __thiscall (ECX = this), RET 8 (2 stack params).
 *
 * Compares stored object (this+0x170) vs param2 via virtual +0x60; if
 * different, builds a small struct on the stack from object fields and
 * calls FUN_005dd1e0 / FUN_00766d10; if the returned float >= 0x76c5b0
 * constant, calls virtual +0xD0 with (param2[0x30], 1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005dd1e0(void);
extern float __cdecl FUN_00766d10(void *a, void *b);

/* extern data symbol for absolute FPU mem op */
extern float DAT_0076c5b0;

__declspec(naked) void __stdcall FUN_005dd110(void)
{
    __asm {
        sub     esp, 0x1c
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0x170]
        test    esi, esi
        jz      L_5dd1ba
        mov     ebx, dword ptr [esp + 0x30]
        cmp     esi, ebx
        jz      L_5dd1ba
        mov     eax, dword ptr [esi]
        push    ebp
        mov     ecx, esi
        call    dword ptr [eax + 0x60]
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        mov     ebp, eax
        call    dword ptr [edx + 0x60]
        cmp     eax, ebp
        pop     ebp
        jz      L_5dd1ba
        mov     eax, dword ptr [esi + 0xd8]
        mov     ecx, dword ptr [eax + 0x9c]
        fld     dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0xac]
        fstp    dword ptr [esp + 0x18]
        add     eax, 0x80
        mov     eax, ecx
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, edx
        mov     dword ptr [esp + 0x20], ecx
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], edx
        mov     dword ptr [esp + 0x1c], eax
        call    FUN_005dd1e0
        mov     ecx, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [ecx]
        lea     edx, [esp + 0x30]
        push    edx
        lea     eax, [esp + 0x1c]
        fstp    dword ptr [esp + 0x28]
        push    eax
        call    FUN_00766d10
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_5dd1ba
        mov     eax, dword ptr [ebx + 0x30]
        mov     edx, dword ptr [edi]
        push    0x1
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0xd0]
L_5dd1ba:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x1c
        ret     0x8
    }
}
