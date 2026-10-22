/*
 * FUN_10031920 (252 B) — __stdcall, RET 0x14.
 * Object creation with SEH frame; allocates + initializes an object and
 * registers it via a vtable dispatch.
 */

extern void FUN_10001d50(void);
extern void FUN_100343e0(void);

__declspec(naked) void __stdcall FUN_10031920(void)
{
    __asm {
        push    -0x1
        push    0x100489eb
        mov     eax, fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x1C
        push    ebx
        push    esi
        push    edi
        xor     eax, eax
        mov     ecx, 0x6
        lea     edi, [esp + 0x10]
        rep stosd
        mov     eax, dword ptr [esp + 0x3C]
        push    0x30
        mov     dword ptr [esp + 0x10], 0x0
        mov     dword ptr [esp + 0x14], 0x18
        mov     dword ptr [esp + 0x18], 0x1
        mov     dword ptr [esp + 0x1C], eax
        call    FUN_10001d50
        mov     esi, eax
        add     esp, 0x4
        mov     dword ptr [esp + 0x3C], esi
        test    esi, esi
        mov     ebx, dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0x30], 0x0
        jz      loc_100319bb
        mov     ecx, dword ptr [esp + 0x40]
        mov     edx, dword ptr [esp + 0x44]
        push    ecx
        push    esi
        push    edx
        push    ebx
        lea     edi, [esi + 0x4]
        push    0x0
        mov     ecx, edi
        mov     dword ptr [esi], 0x1004b08c
        call    FUN_100343e0
        mov     dword ptr [esi + 0x2C], 0x0
        mov     dword ptr [esi], 0x1004b060
        mov     dword ptr [edi], 0x1004b05c
        jmp     loc_100319bd
    loc_100319bb:
        xor     esi, esi
    loc_100319bd:
        mov     eax, dword ptr [ebx + 0xC]
        mov     ecx, dword ptr [eax]
        push    0x80000000
        push    0x0
        lea     edx, [esp + 0x14]
        push    edx
        push    esi
        lea     edx, [esp + 0x20]
        push    edx
        push    eax
        mov     dword ptr [esp + 0x48], 0xffffffff
        call    dword ptr [ecx + 0x3C]
        mov     edi, eax
        test    edi, edi
        jl      loc_100319ee
        mov     eax, dword ptr [esp + 0x48]
        mov     dword ptr [eax], esi
        jmp     loc_10031a06
    loc_100319ee:
        test    esi, esi
        mov     ecx, dword ptr [esp + 0x48]
        mov     dword ptr [ecx], 0x0
        jz      loc_10031a06
        mov     edx, dword ptr [esi + 0x4]
        lea     ecx, [esi + 0x4]
        push    0x1
        call    dword ptr [edx]
    loc_10031a06:
        mov     ecx, dword ptr [esp + 0x28]
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x28
        ret     0x14
    }
}
