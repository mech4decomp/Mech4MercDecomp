/*
 * FUN_1001e1a0 (111 B) - __stdcall, RET 0x10 (4 args).  Calls
 * FUN_1001c7a0(arg2,arg3,0x1004a640,arg4,&local); on success calls
 * FUN_1001c660(adv_buf,arg4-rem, &local, 0x10050298, 0x10049d1c,
 * arg2+0x20) advancing buffer pointers, then stores a result pointer
 * into *arg4.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c7a0(void);   /* rel32 call */
extern void __cdecl FUN_1001c660(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_1001e1a0(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x1c]
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        lea     eax, [esp + 0x10]
        push    eax
        push    esi
        push    0x1004a640
        push    edi
        push    ebx
        mov     dword ptr [esp + 0x24], 0
        call    FUN_1001c7a0
        test    eax, eax
        jl      L207
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ebx + 0x20]
        push    edx
        push    0x10049d1c
        lea     ecx, [edi + eax*2]
        sub     esi, eax
        mov     ebp, eax
        push    0x10050298
        lea     eax, [esp + 0x1c]
        push    eax
        push    esi
        push    ecx
        call    FUN_1001c660
        add     esp, 0x18
        test    eax, eax
        jl      L207
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x24]
        add     ebp, ecx
        mov     dword ptr [edx], ebp
L207:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x10
    }
}
