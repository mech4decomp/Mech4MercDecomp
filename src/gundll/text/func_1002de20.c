/*
 * FUN_1002de20 (128 B) — __stdcall, RET 0x10.
 * Virtual dispatch through *arg1+0x30, then helper FUN_1002d980.
 * Writes results through out-params; frees via FUN_1001c2a0 on failure.
 *
 * CFLAGS: /O1
 */

extern void __stdcall FUN_1002d980(void);
extern void __stdcall FUN_1001c2a0(void);

__declspec(naked) void __stdcall FUN_1002de20(void)
{
    __asm {
        sub     esp, 0x8
        mov     edx, dword ptr [esp + 0x14]
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esp + 0x18]
        push    edx
        push    ecx
        push    esi
        mov     dword ptr [esp + 0x14], 0
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [eax + 0x30]
        test    eax, eax
        jge     loc_de64
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [edx], 0
        xor     eax, eax
        pop     esi
        add     esp, 0x8
        ret     0x10
    loc_de64:
        mov     ecx, dword ptr [esp + 0x8]
        lea     eax, [esp + 0x4]
        push    eax
        push    ecx
        push    esi
        call    FUN_1002d980
        mov     esi, eax
        test    esi, esi
        mov     eax, dword ptr [esp + 0x4]
        jl      loc_de8d
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [edx], eax
        mov     eax, esi
        pop     esi
        add     esp, 0x8
        ret     0x10
    loc_de8d:
        test    eax, eax
        jz      loc_de97
        push    eax
        call    FUN_1001c2a0
    loc_de97:
        mov     eax, esi
        pop     esi
        add     esp, 0x8
        ret     0x10
    }
}
