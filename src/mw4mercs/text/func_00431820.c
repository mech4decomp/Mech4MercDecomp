/*
 * FUN_00431820 (175 B) — MLR __thiscall constructor/init. Calls FUN_00435ce0,
 * stores a vtable pointer (0x76e330), and either runs an assert path
 * (FUN_006fab90) for version>2 or initializes a buffer via virtual calls
 * through *param_2's vtable.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00435ce0(void);
extern int  __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_00431820(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp+8]
        push    ebx
        mov     ebx, dword ptr [ebp+0x10]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp+0xc]
        push    ebx
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00435ce0
        xor     eax, eax
        cmp     ebx, eax
        mov     dword ptr [esi+0xb4], eax
        mov     dword ptr [esi+0xb8], eax
        mov     dword ptr [esi], 0x76e330
        jle     L_431871
        cmp     ebx, 2
        jg      L_431871
        push    0x76e300
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_4318cf
        int     3
        ; assert-return epilogue (dead code after INT3, present in binary)
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc
L_431871:
        mov     edx, dword ptr [edi]
        push    4
        lea     ebx, [esi+0xb8]
        push    ebx
        mov     ecx, edi
        call    dword ptr [edx+0x20]
        mov     ebx, dword ptr [ebx]
        test    ebx, ebx
        jbe     L_4318a4
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax+4]
        mov     edx, dword ptr [edi]
        mov     dword ptr [esi+0xb4], eax
        lea     eax, [ebx+ebx*2]
        shl     eax, 2
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0x18]
        jmp     L_4318ae
L_4318a4:
        mov     dword ptr [esi+0xb4], 0
L_4318ae:
        mov     ecx, dword ptr [esi+0xb8]
        mov     eax, 0x100
        cmp     ecx, eax
        jbe     L_4318cf
        mov     ecx, dword ptr [esi+0xb4]
        mov     dword ptr [esi+0xb4], ecx
        mov     dword ptr [esi+0xb8], eax
L_4318cf:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc
    }
}
