/*
 * FUN_005f7db0 (284 B) — __thiscall (ECX = this), RET 8 (two stack params).
 *
 * Builds/registers sub-objects in a list, iterating a loop.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004d1f80(void);
extern void __stdcall FUN_004d9910(void);
extern void __stdcall FUN_00415230(void);
extern void __stdcall FUN_00591450(void);
extern void __stdcall FUN_004d21c0(void);

extern int g_7f2584;
extern int g_7f2078;

__declspec(naked) void __stdcall FUN_005f7db0(void *p1, void *p2)
{
    __asm {
        sub     esp, 0x44
        mov     eax, dword ptr [esp + 0x48]
        push    edi
        push    0x1
        mov     edi, ecx
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_004d1f80
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x1c]
        add     eax, 0x2
        cmp     eax, ecx
        mov     dword ptr [esp + 0x18], eax
        jbe     loc_7ddd
        mov     dword ptr [esp + 0x1c], eax
loc_7ddd:
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x20]
        sub     ecx, eax
        add     ecx, edx
        jz      loc_7eb5
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x58]
        push    esi
loc_7df6:
        push    0x1
        lea     edx, [esp + 0x14]
        push    ebp
        push    edx
        mov     ebx, eax
        call    FUN_004d9910
        mov     esi, eax
        mov     eax, dword ptr [edi]
        add     esp, 0xc
        push    esi
        mov     ecx, edi
        call    dword ptr [eax + 0x28]
        mov     eax, dword ptr [g_7f2584]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      loc_7e70
        mov     edx, dword ptr [edi + 0x410]
        mov     eax, dword ptr [edi + 0x40c]
        cmp     eax, edx
        lea     ecx, [edi + 0x40c]
        mov     dword ptr [esp + 0x58], esi
        jz      loc_7e4d
loc_7e3e:
        cmp     dword ptr [eax], esi
        jz      loc_7e49
        add     eax, 0x4
        cmp     eax, edx
        jnz     loc_7e3e
loc_7e49:
        cmp     eax, edx
        jnz     loc_7e70
loc_7e4d:
        mov     eax, dword ptr [ecx + 0x4]
        cmp     eax, dword ptr [ecx + 0x8]
        jz      loc_7e63
        test    eax, eax
        jz      loc_7e5b
        mov     dword ptr [eax], esi
loc_7e5b:
        add     eax, 0x4
        mov     dword ptr [ecx + 0x4], eax
        jmp     loc_7e70
loc_7e63:
        push    0x1
        lea     edx, [esp + 0x5c]
        push    edx
        push    eax
        call    FUN_00591450
loc_7e70:
        mov     eax, dword ptr [g_7f2078]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      loc_7e88
        mov     dword ptr [edi + 0x418], esi
loc_7e88:
        mov     eax, dword ptr [esp + 0x24]
        mov     edx, dword ptr [ebx]
        mov     ecx, dword ptr [esp + 0x28]
        add     eax, edx
        cmp     eax, ecx
        mov     dword ptr [esp + 0x24], eax
        jbe     loc_7ea0
        mov     dword ptr [esp + 0x28], eax
loc_7ea0:
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x2c]
        sub     ecx, eax
        add     ecx, edx
        jnz     loc_7df6
        pop     esi
        pop     ebp
        pop     ebx
loc_7eb5:
        lea     ecx, [esp + 0x4]
        mov     byte ptr [edi + 0x33c], 0
        call    FUN_004d21c0
        pop     edi
        add     esp, 0x44
        ret     0x8
    }
}
