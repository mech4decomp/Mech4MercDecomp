/*
 * FUN_1002def0 (115 B) — __stdcall, RET 0x14.
 * GUID-to-string helper: builds a string via FUN_10038141, calls
 * StringFromGUID2 (IAT 0x1004923c), and on success appends a second
 * FUN_10038141 segment, storing the total length through param_3.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10038141(void);
extern void *g_1004923c;

__declspec(naked) void __stdcall FUN_1002def0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        push    edi
        push    0x10049e58
        push    eax
        push    0x100514e0
        push    esi
        push    ebx
        xor     ebp, ebp
        call    FUN_10038141
        mov     ecx, dword ptr [esp + 0x38]
        mov     edi, eax
        add     esp, 0x14
        sub     esi, edi
        push    esi
        lea     ebx, [ebx + edi*2]
        push    ebx
        push    ecx
        call    dword ptr [g_1004923c]
        test    eax, eax
        jnz     Ldf3b
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc1120002
        pop     ebx
        ret     0x14
    Ldf3b:
        dec     eax
        push    0x100514d8
        sub     esi, eax
        lea     edx, [ebx + eax*2]
        push    esi
        push    edx
        add     edi, eax
        call    FUN_10038141
        mov     ecx, dword ptr [esp + 0x28]
        add     esp, 0xc
        add     eax, edi
        pop     edi
        pop     esi
        mov     dword ptr [ecx], eax
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     0x14
    }
}
