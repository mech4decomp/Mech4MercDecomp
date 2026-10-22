/*
 * FUN_004fabf0 (218 B) — Adept::Mover object constructor variant
 * (__thiscall, RET 0x8, 2 params). Calls base ctor FUN_004d9400, allocates
 * a sub-object via virtual call, and either copies 0xc dwords of motion
 * state from +0xd8+0x80 into four sub-objects (+0x60/+0x6c/+0x78/+0x84)
 * or initializes them with FUN_00767430.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004d9400(void);
extern void __cdecl FUN_0041c680(void);
extern void __cdecl FUN_00767430(void);

extern char g_008bd5e8[];  /* DAT_008bd5e8 */

__declspec(naked) void* FUN_004fabf0(void)
{
    __asm {
        sub     esp, 0x30
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x40]
        mov     eax, dword ptr [esi]
        mov     ebp, ecx
        push    0x90
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        mov     ecx, dword ptr [esp + 0x44]
        push    ecx
        push    esi
        mov     ecx, ebp
        call    FUN_004d9400
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     ebx, eax
        mov     eax, dword ptr [ebp + 0xc4]
        test    eax, eax
        mov     dword ptr [ebx], 0x90
        jz      LACA5
        mov     esi, dword ptr [eax + 0xd8]
        push    edi
        add     esi, 0x80
        mov     ecx, 0xc
        lea     edi, [esp + 0x10]
        rep     movsd
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [ebp + 0x1e0]
        push    ecx
        lea     ecx, [ebx + 0x60]
        call    FUN_0041c680
        lea     edx, [esp + 0x10]
        push    edx
        lea     eax, [ebp + 0x1ec]
        push    eax
        lea     ecx, [ebx + 0x6c]
        call    FUN_0041c680
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     edx, [ebp + 0x1f8]
        push    edx
        lea     ecx, [ebx + 0x78]
        call    FUN_0041c680
        lea     eax, [esp + 0x10]
        push    eax
        add     ebp, 0x204
        push    ebp
        lea     ecx, [ebx + 0x84]
        call    FUN_0041c680
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x30
        ret     0x8
LACA5:
        push    offset g_008bd5e8
        lea     ecx, [ebx + 0x60]
        call    FUN_00767430
        push    offset g_008bd5e8
        lea     ecx, [ebx + 0x78]
        call    FUN_00767430
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x30
        ret     0x8
    }
}
