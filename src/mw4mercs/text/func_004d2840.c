/*
 * FUN_004d2840 (201 B) — MLR network subsystem: renderer-table update /
 * registration helper. __thiscall (this=ECX), RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416f60(void);
extern void __cdecl FUN_00417170(void);
extern void __cdecl FUN_004171e0(void);
extern void __cdecl FUN_00417280(void);
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_00413be0(void);
extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_00412d50(void);
extern void __cdecl FUN_0041e710(void);
extern void __cdecl FUN_004171b0(void);

extern unsigned int g_007db0b8;

__declspec(naked) void FUN_004d2840(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x58
        mov     eax, dword ptr [g_007db0b8]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        xor     edi, edi
        mov     di, word ptr [esi + 0x40]
        lea     ecx, [ebp - 0x4]
        push    ecx
        lea     ecx, [eax + 0x14]
        mov     dword ptr [ebp - 0x4], edi
        call    FUN_00416f60
        mov     edx, dword ptr [g_007db0b8]
        add     edx, 0x14
        push    edx
        lea     ecx, [ebp - 0x18]
        mov     ebx, eax
        call    FUN_00417170
        lea     ecx, [ebp - 0x18]
        mov     dword ptr [ebp - 0x18], 0x7725a0
        call    FUN_004171e0
        lea     ecx, [ebp - 0x18]
        call    FUN_00417280
        cmp     eax, ebx
        jz      L_4d28b5
        mov     eax, dword ptr [esi + 0x28]
        xor     ecx, ecx
        mov     cx, word ptr [esi + 0x42]
        push    eax
        movsx   edx, di
        push    ecx
        push    edx
        push    0x7725e0
        call    FUN_006fabf0
        add     esp, 0x10
        test    eax, eax
        jz      L_4d28b5
        int     3
L_4d28b5:
        add     esi, 0x20
        mov     ecx, 0x8
        lea     edi, [ebp - 0x38]
        rep movsd
        mov     eax, dword ptr [ebx + 0x14]
        push    0x1
        lea     ecx, [ebp - 0x38]
        mov     dword ptr [ebp - 0x38], eax
        call    FUN_00413be0
        mov     ecx, dword ptr [ebp - 0x24]
        mov     edx, dword ptr [ebp - 0x20]
        push    0x0
        push    ecx
        push    edx
        lea     ecx, [ebp - 0x58]
        call    FUN_0041e690
        mov     ecx, dword ptr [ebp + 0x8]
        lea     eax, [ebp - 0x58]
        push    eax
        call    FUN_00412d50
        lea     ecx, [ebp - 0x58]
        call    FUN_0041e710
        lea     ecx, [ebp - 0x18]
        call    FUN_004171b0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
