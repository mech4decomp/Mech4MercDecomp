/*
 * FUN_004C2710 (150 B) — __thiscall (3 stack args, RET 0xC). Initializes
 * a local structure via FUN_0048BCA0, copies 6 dwords with rep movsd,
 * calls FUN_004C28D0, then FUN_0048CA40 with [arg1+0x26C].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0048BCA0(void);
extern void __cdecl FUN_004C28D0(void);
extern void __cdecl FUN_0048CA40(void);

__declspec(naked) void FUN_004C2710(void)
{
    __asm {
        sub     esp, 0x54
        push    ebx
        push    esi
        mov     ebx, ecx
        push    edi
        lea     ecx, [esp + 0x2c]
        call    FUN_0048BCA0
        mov     eax, dword ptr [ebx + 0x174]
        mov     ecx, dword ptr [esp + 0x6c]
        mov     dword ptr [esp + 0x2c], eax
        and     ecx, 0x3f
        lea     eax, [ebx + 0x144]
        mov     dword ptr [esp + 0x50], eax
        mov     eax, dword ptr [esp + 0x68]
        mov     dword ptr [esp + 0x48], ecx
        lea     edx, [ebx + 0x80]
        mov     esi, eax
        mov     dword ptr [esp + 0x4c], edx
        mov     ecx, 6
        lea     edi, [esp + 0x30]
        rep     movsd
        add     eax, 0x18
        push    eax
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, ebx
        mov     dword ptr [esp + 0x64], 0x7dab08
        call    FUN_004C28D0
        xor     edx, edx
        test    eax, eax
        setle   dl
        mov     dword ptr [esp + 0x58], eax
        lea     eax, [esp + 0xc]
        lea     ecx, [esp + 0x2c]
        push    ecx
        dec     edx
        and     edx, eax
        mov     dword ptr [esp + 0x58], edx
        mov     edx, dword ptr [esp + 0x68]
        mov     ecx, dword ptr [edx + 0x26c]
        call    FUN_0048CA40
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x54
        ret     0xc
    }
}
