/*
 * FUN_00644d40 (147 B) — __cdecl, plain RET (one stack param).
 *
 * Decomposes a packed 32-bit color into its byte channels, converts
 * each to float, scales by a constant, and combines via _ftol.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_00792630;
extern void __cdecl FUN_0075db4a(void);   /* _ftol */

__declspec(naked) void __stdcall FUN_00644d40(void)
{
    __asm {
        sub     esp, 8
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        mov     eax, esi
        shr     eax, 0x10
        and     eax, 0xff
        mov     dword ptr [esp + 0x8], eax
        mov     dword ptr [esp + 0xc], 0
        fild    qword ptr [esp + 0x8]
        fmul    dword ptr [g_00792630]
        call    FUN_0075db4a
        mov     edx, esi
        shr     edx, 0x8
        and     edx, 0xff
        mov     ecx, esi
        shr     ecx, 0x18
        mov     dword ptr [esp + 0x8], edx
        mov     dword ptr [esp + 0xc], 0
        fild    qword ptr [esp + 0x8]
        shl     ecx, 0x8
        sub     ecx, eax
        shl     ecx, 0x8
        fmul    dword ptr [g_00792630]
        mov     ebx, ecx
        call    FUN_0075db4a
        and     esi, 0xff
        mov     dword ptr [esp + 0x8], esi
        mov     dword ptr [esp + 0xc], 0
        fild    qword ptr [esp + 0x8]
        sub     ebx, eax
        shl     ebx, 0x8
        fmul    dword ptr [g_00792630]
        call    FUN_0075db4a
        sub     ebx, eax
        pop     esi
        mov     eax, ebx
        pop     ebx
        add     esp, 8
        ret
    }
}
