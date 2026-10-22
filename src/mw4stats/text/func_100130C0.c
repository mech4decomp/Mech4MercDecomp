/*
 * FUN_100130C0 (500 B, __fastcall, ECX = this) - Destructor with SEH
 * frame. Frees 10 buffer groups (ptr/count/cap triplets), zeroes them,
 * then calls sub-destructor FUN_100067d0 and restores the vtable.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_100210ec;   /* free */
extern void __cdecl FUN_100067d0(void);

__declspec(naked) void __cdecl FUN_100130C0(void)
{
    __asm {
        push    -1
        push    0x1001fe08
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    ebx
        mov     ebx, dword ptr [g_100210ec]      /* free */
        push    esi
        mov     esi, ecx
        push    edi
        xor     edi, edi
        mov     eax, dword ptr [esi + 0x5a4]
        mov     dword ptr [esp + 0xc], esi
        cmp     eax, edi
        jbe     L_13101
        mov     eax, dword ptr [esi + 0x598]
        cmp     eax, edi
        jz      L_13101
        push    eax
        call    ebx
        add     esp, 4
    L_13101:
        mov     dword ptr [esi + 0x598], edi
        mov     dword ptr [esi + 0x5a8], edi
        mov     dword ptr [esi + 0x5a4], edi
        mov     eax, dword ptr [esi + 0x50c]
        cmp     eax, edi
        jbe     L_1312d
        mov     eax, dword ptr [esi + 0x500]
        cmp     eax, edi
        jz      L_1312d
        push    eax
        call    ebx
        add     esp, 4
    L_1312d:
        mov     dword ptr [esi + 0x500], edi
        mov     dword ptr [esi + 0x510], edi
        mov     dword ptr [esi + 0x50c], edi
        mov     eax, dword ptr [esi + 0x474]
        cmp     eax, edi
        jbe     L_13159
        mov     eax, dword ptr [esi + 0x468]
        cmp     eax, edi
        jz      L_13159
        push    eax
        call    ebx
        add     esp, 4
    L_13159:
        mov     dword ptr [esi + 0x468], edi
        mov     dword ptr [esi + 0x478], edi
        mov     dword ptr [esi + 0x474], edi
        mov     eax, dword ptr [esi + 0x3dc]
        cmp     eax, edi
        jbe     L_13185
        mov     eax, dword ptr [esi + 0x3d0]
        cmp     eax, edi
        jz      L_13185
        push    eax
        call    ebx
        add     esp, 4
    L_13185:
        mov     dword ptr [esi + 0x3d0], edi
        mov     dword ptr [esi + 0x3e0], edi
        mov     dword ptr [esi + 0x3dc], edi
        mov     eax, dword ptr [esi + 0x344]
        cmp     eax, edi
        jbe     L_131b1
        mov     eax, dword ptr [esi + 0x338]
        cmp     eax, edi
        jz      L_131b1
        push    eax
        call    ebx
        add     esp, 4
    L_131b1:
        mov     dword ptr [esi + 0x338], edi
        mov     dword ptr [esi + 0x348], edi
        mov     dword ptr [esi + 0x344], edi
        mov     eax, dword ptr [esi + 0x2ac]
        cmp     eax, edi
        jbe     L_131dd
        mov     eax, dword ptr [esi + 0x2a0]
        cmp     eax, edi
        jz      L_131dd
        push    eax
        call    ebx
        add     esp, 4
    L_131dd:
        mov     dword ptr [esi + 0x2a0], edi
        mov     dword ptr [esi + 0x2b0], edi
        mov     dword ptr [esi + 0x2ac], edi
        mov     eax, dword ptr [esi + 0x214]
        cmp     eax, edi
        jbe     L_13209
        mov     eax, dword ptr [esi + 0x208]
        cmp     eax, edi
        jz      L_13209
        push    eax
        call    ebx
        add     esp, 4
    L_13209:
        mov     dword ptr [esi + 0x208], edi
        mov     dword ptr [esi + 0x218], edi
        mov     dword ptr [esi + 0x214], edi
        mov     eax, dword ptr [esi + 0x17c]
        cmp     eax, edi
        jbe     L_13235
        mov     eax, dword ptr [esi + 0x170]
        cmp     eax, edi
        jz      L_13235
        push    eax
        call    ebx
        add     esp, 4
    L_13235:
        mov     dword ptr [esi + 0x170], edi
        mov     dword ptr [esi + 0x180], edi
        mov     dword ptr [esi + 0x17c], edi
        mov     eax, dword ptr [esi + 0xe4]
        cmp     eax, edi
        jbe     L_13261
        mov     eax, dword ptr [esi + 0xd8]
        cmp     eax, edi
        jz      L_13261
        push    eax
        call    ebx
        add     esp, 4
    L_13261:
        mov     dword ptr [esi + 0xd8], edi
        mov     dword ptr [esi + 0xe8], edi
        mov     dword ptr [esi + 0xe4], edi
        mov     eax, dword ptr [esi + 0x48]
        mov     dword ptr [esp + 0x18], edi
        cmp     eax, edi
        jbe     L_1328b
        mov     eax, dword ptr [esi + 0x3c]
        cmp     eax, edi
        jz      L_1328b
        push    eax
        call    ebx
        add     esp, 4
    L_1328b:
        lea     ecx, [esi + 0x20]
        mov     dword ptr [esi + 0x3c], edi
        mov     dword ptr [esi + 0x4c], edi
        mov     dword ptr [esi + 0x48], edi
        call    FUN_100067d0
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esi], 0x10021688
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
