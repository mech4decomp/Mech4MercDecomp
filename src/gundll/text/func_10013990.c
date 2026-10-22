/*
 * FUN_10013990 (221 B) - __stdcall, RET 0x10 (4 args).  Registration helper:
 * calls FUN_1001c7a0(arg1,arg2,0x1004a210,arg3,&local3), then
 * FUN_1002af80(this->+0x20,&local1) and FUN_1002af80(this->+0x24,&local2),
 * then FUN_1001c660(ebp,ebx,&local1,0x10050404,0x10049bf0,local1,
 * 0x10049b80,local2); on success writes local3+arg3 into *arg4.  Frees
 * local1/local2 via FUN_10001d60 if they differ from this->+0x20/+0x24.
 *
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c7a0(void);    /* rel32 call */
extern void __cdecl FUN_1002af80(void);    /* rel32 call */
extern void __cdecl FUN_1001c660(void);    /* rel32 call */
extern void __cdecl FUN_10001d60(void);    /* rel32 call (shared_free) */

__declspec(naked) void __stdcall FUN_10013990(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        mov     ebx, dword ptr [esp + 0x1c]
        push    ebp
        mov     ebp, dword ptr [esp + 0x1c]
        push    esi
        xor     eax, eax
        push    edi
        mov     edi, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x10], eax
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        push    0x1004a210
        push    ebp
        push    edi
        call    FUN_1001c7a0
        mov     esi, eax
        test    esi, esi
        jl      L4
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [edi + 0x20]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x30], eax
        lea     ebp, [ebp + eax*2]
        sub     ebx, eax
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L4
        mov     ecx, dword ptr [edi + 0x24]
        lea     eax, [esp + 0x18]
        push    eax
        push    ecx
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L4
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x14]
        push    edx
        push    0x10049b80
        push    eax
        push    0x10049bf0
        push    0x10050404
        lea     ecx, [esp + 0x24]
        push    ecx
        push    ebx
        push    ebp
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x20
        test    esi, esi
        jl      L4
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x2c]
        add     eax, edx
        mov     dword ptr [ecx], eax
    L4:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [edi + 0x20]
        je      L5
        push    eax
        call    FUN_10001d60
        add     esp, 4
    L5:
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, dword ptr [edi + 0x24]
        je      L6
        push    eax
        call    FUN_10001d60
        add     esp, 4
    L6:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x10
    }
}
