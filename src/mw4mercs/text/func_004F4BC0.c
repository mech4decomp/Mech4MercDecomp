/*
 * FUN_004F4BC0 (134 B) — __thiscall (this in ECX), RET (no args).
 * Looks up an object via an obfuscated pointer chain (xor 0x85739531)
 * and calls FUN_004D62E0/FUN_004F4DC0; on failure allocates a 0x258
 * object via FUN_004084D0 and calls FUN_004F4C50, with lock/unlock
 * around FUN_006F4950/FUN_006F49A0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern int g_007dc688;
extern int g_007dc8a0;

extern void __cdecl FUN_004D62E0(void);
extern void __cdecl FUN_004F4DC0(void);
extern void __cdecl FUN_006F4950(void);
extern void __cdecl FUN_004084D0(void);
extern void __cdecl FUN_004F4C50(void);
extern void __cdecl FUN_006F49A0(void);

__declspec(naked) void FUN_004F4BC0(void)
{
    __asm {
        mov     eax, dword ptr [g_007dab44]
        mov     eax, dword ptr [eax]
        push    esi
        push    edi
        xor     eax, dword ptr [g_007dab40]
        mov     edi, dword ptr [esp + 0xc]
        lea     ecx, [edi + 0x54]
        push    ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        call    FUN_004D62E0
        mov     esi, eax
        test    esi, esi
        je      L4f4bfc
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        push    edi
        mov     ecx, esi
        call    FUN_004F4DC0
        pop     edi
        mov     eax, esi
        pop     esi
        ret
    L4f4bfc:
        mov     eax, dword ptr [g_007dc688]
        push    eax
        call    FUN_006F4950
        push    0x258
        call    FUN_004084D0
        add     esp, 4
        test    eax, eax
        je      L4f4c3a
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [g_007dc8a0]
        push    0
        push    ecx
        push    edi
        push    edx
        mov     ecx, eax
        call    FUN_004F4C50
        mov     esi, eax
        call    FUN_006F49A0
        pop     edi
        mov     eax, esi
        pop     esi
        ret
    L4f4c3a:
        xor     esi, esi
        call    FUN_006F49A0
        pop     edi
        mov     eax, esi
        pop     esi
        ret
    }
}
