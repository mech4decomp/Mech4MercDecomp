/*
 * FUN_1000e820 (188 B) — __stdcall, RET 0x10.
 * Object init helper: validates [edi+0xc]==0, allocates two buffers via
 * FUN_1002e1c0, stores into object fields, returns 0 on success.
 */

extern void __cdecl FUN_1001c760(void);
extern void __cdecl FUN_1002e1c0(void);
extern void __cdecl FUN_1002e220(void);

__declspec(naked) void __stdcall FUN_1000e820(void)
{
    __asm {
        sub     esp, 0x8
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 0x8], 0
        mov     dword ptr [esp + 0xc], 0
        jz      L_e84d
        pop     edi
        mov     eax, 0xc112000d
        pop     esi
        add     esp, 0x8
        ret     0x10
    L_e84d:
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        push    edi
        call    FUN_1001c760
        mov     esi, eax
        test    esi, esi
        jl      L_e8a4
        mov     ecx, dword ptr [esp + 0x1c]
        push    ecx
        lea     edx, [esp + 0xc]
        push    edx
        call    FUN_1002e1c0
        mov     esi, eax
        test    esi, esi
        jl      L_e8a4
        mov     eax, dword ptr [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0x10]
        push    ecx
        call    FUN_1002e1c0
        mov     esi, eax
        test    esi, esi
        jl      L_e8a4
        mov     eax, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x8]
        mov     dword ptr [edi + 0x24], eax
        mov     byte ptr [edi + 0x4], 1
        mov     dword ptr [edi + 0x20], edx
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0x8
        ret     0x10
    L_e8a4:
        mov     eax, dword ptr [esp + 0x8]
        test    eax, eax
        jz      L_e8bb
        mov     ecx, dword ptr [edi + 0xc]
        test    ecx, ecx
        setnz   cl
        push    eax
        push    ecx
        call    FUN_1002e220
    L_e8bb:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      L_e8d2
        mov     ecx, dword ptr [edi + 0xc]
        test    ecx, ecx
        setnz   dl
        push    eax
        push    edx
        call    FUN_1002e220
    L_e8d2:
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0x8
        ret     0x10
    }
}
