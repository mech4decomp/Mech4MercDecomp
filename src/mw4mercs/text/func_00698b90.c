/*
 * FUN_00698b90 (144 B) — __thiscall constructor (ECX = this), RET 4.
 *
 * Calls FUN_00415180(DAT_007b8c10), initializes member fields from
 * the param object, allocates a buffer via FUN_004084d0, and fills
 * it with 0xff.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_007b8c10;
extern unsigned int g_007f27bc;

extern void __cdecl FUN_00415180(unsigned int);
extern void __cdecl FUN_006f4950(unsigned int);
extern void __cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void __stdcall FUN_00698b90(void *param)
{
    __asm {
        mov     eax, dword ptr [g_007b8c10]
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        mov     eax, dword ptr [esp + 0x10]
        mov     edi, dword ptr [eax + 0x10]
        mov     ecx, dword ptr [edi + 0x4]
        mov     edx, dword ptr [ecx + 0x8]
        mov     dword ptr [esi + 0x28], eax
        mov     eax, dword ptr [g_007f27bc]
        push    eax
        mov     dword ptr [esi + 0x8], 0
        mov     dword ptr [esi + 0xc], 0
        mov     dword ptr [esi], 0x799830
        mov     dword ptr [esi + 0x18], edi
        mov     dword ptr [esi + 0x10], edx
        call    FUN_006f4950
        mov     ecx, dword ptr [edi + 0x30]
        shr     ecx, 4
        push    ecx
        call    FUN_004084d0
        mov     ebp, eax
        add     esp, 4
        mov     dword ptr [esi + 0x1c], ebp
        call    FUN_006f49a0
        mov     edx, dword ptr [edi + 0x30]
        mov     eax, 0x3f800000
        mov     dword ptr [esi + 0x14], eax
        mov     dword ptr [esi + 0x20], eax
        shr     edx, 4
        xor     eax, eax
        test    edx, edx
        mov     byte ptr [esi + 0x24], 0
        jle     L_done
    L_loop:
        mov     byte ptr [eax + ebp*1], 0xff
        mov     ecx, dword ptr [edi + 0x30]
        inc     eax
        shr     ecx, 4
        cmp     eax, ecx
        jl      L_loop
    L_done:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        ret     4
    }
}
