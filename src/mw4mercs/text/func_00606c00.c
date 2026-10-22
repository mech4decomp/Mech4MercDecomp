/*
 * FUN_00606c00 (151 B) — archive iterator builder: creates an iterator
 * object (FUN_00606ca0) over the "Iterators" sub-archive, then fills its
 * output array by calling a callback per element.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f27bc;

extern void __cdecl FUN_00606aa0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00606ca0(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_00606c00(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        push    esi
        push    edi
        push    eax
        call    FUN_00606aa0
        mov     ecx, dword ptr [g_007f27bc]
        push    ecx
        mov     esi, eax
        call    FUN_006f4950
        push    0x18
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L1
        push    esi
        mov     ecx, eax
        call    FUN_00606ca0
        mov     edi, eax
        mov     dword ptr [esp+0xc], edi
        jmp     L2
L1:
        mov     dword ptr [esp+0xc], 0x0
        mov     edi, dword ptr [esp+0xc]
L2:
        call    FUN_006f49a0
        mov     eax, 0xaaaaaaab
        mul     dword ptr [esi+0x10]
        shr     edx, 0x3
        and     edx, 0xff
        jle     L3
        mov     edi, dword ptr [edi+0x14]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esi+0x14]
        mov     esi, dword ptr [esi+0xc]
        mov     ebx, edx
L4:
        mov     edx, dword ptr [esp+0x1c]
        mov     eax, dword ptr [esi]
        push    edx
        add     eax, ebp
        push    eax
        call    dword ptr [esp+0x20]
        mov     dword ptr [edi], eax
        add     esp, 0x8
        add     esi, 0xc
        add     edi, 0x4
        dec     ebx
        jnz     L4
        mov     eax, dword ptr [esp+0x14]
        pop     ebp
        pop     ebx
        pop     edi
        pop     esi
        ret     0xc
L3:
        mov     eax, edi
        pop     edi
        pop     esi
        ret     0xc
    }
}
