/*
 * FUN_10034dd0 (185 B) — __fastcall (ECX = this), destructor with SEH frame.
 * Sets vtable pointers, calls FUN_10035160, releases sub-objects via virtual
 * calls, calls timeEndPeriod(1), then destroys a member at [this+0x54].
 */

extern void __cdecl FUN_10035160(void);
extern void __cdecl FUN_100349e0(void);
extern void *g_10049200;   /* IAT: timeEndPeriod */

__declspec(naked) void FUN_10034dd0(void)
{
    __asm {
        push    -1
        push    0x10048b6b
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 0x4], esi
        mov     dword ptr [esi], 0x1004b230
        mov     dword ptr [esi + 0x4], 0x1004b228
        mov     dword ptr [esi + 0x8], 0x1004b224
        push    esi
        mov     dword ptr [esp + 0x14], 0
        call    FUN_10035160
        mov     edx, dword ptr [esi + 0x24]
        mov     eax, dword ptr [esi + 0x10]
        mov     ecx, dword ptr [eax]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     eax, dword ptr [esi + 0x10]
        test    eax, eax
        jz      L_e30
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x8]
        mov     dword ptr [esi + 0x10], 0
    L_e30:
        mov     eax, dword ptr [esi + 0x18]
        test    eax, eax
        jz      L_e44
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x8]
        mov     dword ptr [esi + 0x18], 0
    L_e44:
        push    1
        call    dword ptr [g_10049200]
        lea     eax, [esi + 0x54]
        test    eax, eax
        mov     dword ptr [esp + 0x10], 0xffffffff
        pop     esi
        jz      L_e73
        lea     ecx, [eax + 0x4]
        call    FUN_100349e0
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    L_e73:
        xor     ecx, ecx
        call    FUN_100349e0
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
