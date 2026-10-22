/*
 * FUN_10003fd0 (98 B, __fastcall) - teardown. Locks +0x20-linked list,
 * walks nodes calling FUN_1001ee22 / FUN_10004040, then zeroes fields.
 *
 * Transcribed from MW4Stats.dll reference bytes.
 */

extern void *g_10021048; /* IAT: LeaveCriticalSection */
extern void *g_10021044; /* IAT: EnterCriticalSection */
extern void __cdecl FUN_1001ee22(void);
extern void __cdecl FUN_10004040(void);

__declspec(naked) void __cdecl FUN_10003fd0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    esi
        call    dword ptr [g_10021048]
        mov     eax, dword ptr [esi+0x20]
        test    eax, eax
        jz      L_0401b
        push    ebx
        mov     bl, byte ptr [esi+0x18]
        push    edi
L_start:
        test    bl, bl
        mov     eax, dword ptr [esi+0x20]
        mov     edi, dword ptr [eax+0xa0]
        jz      L_04004
        mov     ecx, eax
        mov     edx, dword ptr [ecx+0x98]
        push    edx
        call    FUN_1001ee22
        add     esp, 0x4
L_04004:
        mov     ecx, dword ptr [esi+0x20]
        test    ecx, ecx
        jz      L_04012
        push    1
        call    FUN_10004040
L_04012:
        test    edi, edi
        mov     dword ptr [esi+0x20], edi
        jnz     L_start
        pop     edi
        pop     ebx
L_0401b:
        push    esi
        mov     dword ptr [esi+0x1c], 0
        mov     dword ptr [esi+0x24], 0
        call    dword ptr [g_10021044]
        pop     esi
        ret
    }
}
