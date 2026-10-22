/*
 * FUN_00439d60 (175 B) — MLR __thiscall constructor. Calls base ctor,
 * sets vtable 0x76e51c, queries a stream for buffer sizes.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0043e360(int, int, int);
extern int __cdecl FUN_006fab90(const char *);

__declspec(naked) void FUN_00439d60(void)
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
        call    FUN_0043e360
        xor     eax, eax
        cmp     ebx, eax
        mov     dword ptr [esi+0x94], eax
        mov     dword ptr [esi+0x98], eax
        mov     dword ptr [esi], 0x76e51c
        jle     L_439db1
        cmp     ebx, 2
        jg      L_439db1
        push    0x76e300
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_439e0f
        int     3
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc
L_439db1:
        mov     edx, dword ptr [edi]
        push    4
        lea     ebx, [esi+0x98]
        push    ebx
        mov     ecx, edi
        call    dword ptr [edx+0x20]
        mov     ebx, dword ptr [ebx]
        test    ebx, ebx
        jbe     L_439de4
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax+4]
        mov     edx, dword ptr [edi]
        mov     dword ptr [esi+0x94], eax
        lea     eax, [ebx+ebx*2]
        shl     eax, 2
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0x18]
        jmp     L_439dee
L_439de4:
        mov     dword ptr [esi+0x94], 0
L_439dee:
        mov     ecx, dword ptr [esi+0x98]
        mov     eax, 0x100
        cmp     ecx, eax
        jbe     L_439e0f
        mov     ecx, dword ptr [esi+0x94]
        mov     dword ptr [esi+0x94], ecx
        mov     dword ptr [esi+0x98], eax
L_439e0f:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc
    }
}
