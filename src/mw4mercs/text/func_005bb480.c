/*
 * FUN_005bb480 (323 B) — __thiscall (ECX = this), RET 8 (two stack params).
 *
 * Complex initializer: copies a 0xC-dword template from 0x7B9460, calls
 * several sub-initializers, dispatches virtual methods, and conditionally
 * frees a param object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_0041fde0(void);
extern void __fastcall FUN_004daa20(void);
extern void __fastcall FUN_00707e70(void);
extern void __fastcall FUN_0041fcb0(void);
extern void __fastcall FUN_0041fcd0(void);
extern void __fastcall FUN_0041c830(void);
extern void __fastcall FUN_0041fd80(void);
extern void __fastcall FUN_005bb6b0(void);
extern void __fastcall FUN_004084e0(void);

__declspec(naked) void FUN_005bb480(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 0xC]
        push    ebx
        push    ebp
        push    esi
        mov     ebx, ecx
        mov     ecx, dword ptr [eax]
        push    edi
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, dword ptr [ebx + 0xE0]
        mov     edx, dword ptr [ecx]
        push    0
        push    6
        call    dword ptr [edx + 4]
        mov     ebp, dword ptr [esp + 0x18]
        push    2
        mov     ecx, 0xC
        mov     esi, 0x7B9460
        mov     edi, ebp
        rep movsd
        mov     edi, dword ptr [esp + 0x14]
        push    0
        push    1
        lea     eax, [edi + 0x18]
        push    eax
        mov     ecx, ebp
        call    FUN_0041fde0
        mov     ecx, dword ptr [edi + 0xC]
        mov     edx, dword ptr [edi + 0x10]
        mov     eax, dword ptr [edi + 0x14]
        lea     esi, [edi + 0xC]
        mov     dword ptr [ebp + 0xC], ecx
        mov     dword ptr [ebp + 0x1C], edx
        push    ebp
        mov     ecx, ebx
        mov     dword ptr [ebp + 0x2C], eax
        call    FUN_004daa20
        push    0
        call    FUN_00707e70
        fstp    qword ptr [ebx + 0xEC]
        lea     ebp, [ebx + 0x258]
        mov     ecx, ebp
        call    FUN_0041fcb0
        mov     ecx, dword ptr [edi + 8]
        push    ecx
        mov     ecx, ebp
        call    FUN_0041fcd0
        mov     eax, dword ptr [ebx + 0x10]
        mov     edx, dword ptr [edi + 8]
        or      eax, 0x800000
        mov     dword ptr [ebx + 0x10], eax
        mov     eax, dword ptr [edx + 0xD8]
        add     eax, 0x80
        push    eax
        push    esi
        lea     ecx, [ebx + 0x260]
        call    FUN_0041c830
        lea     esi, [ebx + 0x210]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      L1
        mov     ecx, esi
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xE0]
        mov     edx, dword ptr [eax]
        push    0
        push    5
        mov     ecx, eax
        call    dword ptr [edx + 4]
L1:
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0xAC]
        mov     edx, dword ptr [ebx]
        push    0
        mov     ecx, ebx
        call    dword ptr [edx + 0x20]
        mov     ecx, ebx
        call    FUN_005bb6b0
        mov     esi, dword ptr [esp + 0x1C]
        mov     eax, dword ptr [ebx]
        push    esi
        mov     ecx, ebx
        call    dword ptr [eax + 0xA0]
        mov     ecx, dword ptr [ebx + 0xE0]
        cmp     dword ptr [ecx + 0x14], 1
        jnz     L2
        test    esi, esi
        jz      L3
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L4
        push    eax
        call    FUN_004084e0
        add     esp, 4
L4:
        push    esi
        call    FUN_004084e0
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        pop     ecx
        ret     8
L2:
        mov     dword ptr [ebx + 0x130], esi
L3:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        pop     ecx
        ret     8
    }
}
