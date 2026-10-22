/*
 * FUN_005E5670 (137 B) — __thiscall (this in ECX), RET 0x8 (2 params).
 * Copies a 0x30-byte block (rep movsd) from [ebx+0xd8]+0x50 into
 * [ebx+0xf4], initializes two sub-objects via FUN_00767430, conditionally
 * calls FUN_005E5CB0 + a virtual method (vtable+0x18), then calls
 * FUN_005ED7D0 with two args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00767430(void);
extern void __cdecl FUN_005E5CB0(void);
extern void __cdecl FUN_005ED7D0(void);

__declspec(naked) void FUN_005E5670(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    ebx
        mov     ebx, ecx
        mov     ecx, dword ptr [esp + 0xc]
        push    esi
        mov     esi, dword ptr [ebx + 0xd8]
        push    edi
        mov     dword ptr [ebx + 0xec], eax
        mov     dword ptr [ebx + 0xf0], ecx
        add     esi, 0x50
        lea     edi, [ebx + 0xf4]
        mov     ecx, 0xc
        lea     edx, [ebx + 0x198]
        rep movsd
        push    edx
        lea     ecx, [ebx + 0x1e0]
        call    FUN_00767430
        lea     eax, [ebx + 0x1b0]
        push    eax
        lea     ecx, [ebx + 0x1f8]
        call    FUN_00767430
        mov     al, byte ptr [ebx + 0x2cc]
        test    al, al
        je      L5e56e2
        lea     ecx, [ebx + 0x2ce]
        push    ecx
        mov     ecx, ebx
        call    FUN_005E5CB0
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx + 0x18]
    L5e56e2:
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        mov     ecx, ebx
        call    FUN_005ED7D0
        pop     edi
        pop     esi
        pop     ebx
        ret     8
    }
}
