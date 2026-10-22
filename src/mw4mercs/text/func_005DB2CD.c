/*
 * FUN_005DB2CD (140 B) — __thiscall (this in ECX), RET 0x8 (2 params).
 * Calls virtual methods on an object, resolves an obfuscated pointer
 * (xor 0x85739531) from g_007dab44/g_007dab40, calls FUN_004FCA80, and
 * copies a string from [edi+0x2d4] into [ebx+0x68] (rep movsd/movsb).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab40;
extern int g_007dab44;

extern void __cdecl FUN_004F4540(void);
extern void __cdecl FUN_004FCA80(void);

__declspec(naked) void FUN_005DB2CD(void)
{
    __asm {
        nop
        nop
        nop
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    0x140
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        push    esi
        mov     ecx, edi
        call    FUN_004F4540
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 4]
        mov     ecx, dword ptr [g_007dab40]
        mov     ebx, eax
        mov     eax, dword ptr [g_007dab44]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [edi + 0x170]
        mov     edx, dword ptr [ecx + 0x2c]
        mov     ecx, dword ptr [eax + 0x10]
        push    edx
        xor     ecx, 0x85739531
        mov     dword ptr [ebx], 0x140
        call    FUN_004FCA80
        mov     edi, dword ptr [edi + 0x2d4]
        or      ecx, 0xffffffff
        mov     dword ptr [ebx + 0x64], eax
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        lea     edx, [ebx + 0x68]
        shr     ecx, 2
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        ret     8
    }
}
