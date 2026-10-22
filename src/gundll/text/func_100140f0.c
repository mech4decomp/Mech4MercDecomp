/*
 * FUN_100140f0 (178 B) - __stdcall, RET 0x10 (4 args).  Registration helper:
 * calls FUN_1001c7a0(arg1,arg2,0x1004a28c,arg3,&local2), then
 * FUN_1002af80(this->+0x24,&local1), then FUN_1001c660(ebp,ebx,&local1,
 * 0x1005033c,0x10049bf8,this->+0x20,0x10049c00,local1); on success writes
 * local2+arg3 into *arg4.  Frees local1 via FUN_10001d60 if it differs from
 * this->+0x24.
 *
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c7a0(void);    /* rel32 call */
extern void __cdecl FUN_1002af80(void);    /* rel32 call */
extern void __cdecl FUN_1001c660(void);    /* rel32 call */
extern void __cdecl FUN_10001d60(void);    /* rel32 call (shared_free) */

__declspec(naked) void __stdcall FUN_100140f0(void)
{
    __asm {
        sub     esp, 8
        push    ebx
        mov     ebx, dword ptr [esp + 0x18]
        push    ebp
        mov     ebp, dword ptr [esp + 0x18]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        xor     eax, eax
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x10], eax
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        push    0x1004a28c
        push    ebp
        push    edi
        call    FUN_1001c7a0
        mov     esi, eax
        test    esi, esi
        jl      L4
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [edi + 0x24]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x2c], eax
        lea     ebp, [ebp + eax*2]
        sub     ebx, eax
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L4
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [edi + 0x20]
        push    eax
        push    0x10049c00
        push    ecx
        push    0x10049bf8
        push    0x1005033c
        lea     edx, [esp + 0x24]
        push    edx
        push    ebx
        push    ebp
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x20
        test    esi, esi
        jl      L4
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x28]
        add     ecx, eax
        mov     dword ptr [edx], ecx
    L4:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [edi + 0x24]
        je      L5
        push    eax
        call    FUN_10001d60
        add     esp, 4
    L5:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     0x10
    }
}
