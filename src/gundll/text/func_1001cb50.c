/*
 * FUN_1001cb50 (320 B) — __stdcall, RET 0x18.
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1002e2a0(void);
extern void __cdecl FUN_1001ccc0(void);
extern void __cdecl FUN_10001d50(void);
extern void __cdecl FUN_1001d150(void);
extern void __cdecl FUN_1001cce0(void);
extern void __cdecl FUN_1002e2e0(void);
extern void __cdecl FUN_1002e320(void);
extern void __cdecl FUN_1002e380(void);
extern void __cdecl FUN_10001dd0(void);
extern void __cdecl FUN_1001ccf0(void);
extern void __cdecl FUN_1001d970(void);
extern void __cdecl FUN_1001d170(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_1001cb50(void)
{
    __asm {
        sub     esp, 0x650
        push    ebx
        push    ebp
        push    esi
        push    edi
        lea     ecx, [esp + 0x220]
        call    FUN_1002e2a0
        lea     ecx, [esp + 0x14]
        call    FUN_1001ccc0
        push    0x10
        call    FUN_10001d50
        mov     bl, byte ptr [esp + 0x670]
        add     esp, 0x4
        test    eax, eax
        jz      Lcb91
        mov     ecx, eax
        call    FUN_1001d150
        mov     ebp, eax
        test    ebp, ebp
        jnz     Lcb9f
    Lcb91:
        mov     edi, dword ptr [esp + 0x10]
        mov     esi, 0x8007000e
        jmp     Lcc70
    Lcb9f:
        push    ebp
        lea     eax, [esp + 0x18]
        push    eax
        call    FUN_1001cce0
        mov     esi, eax
        test    esi, esi
        jl      Lcc5c
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     ecx, [esp + 0x224]
        call    FUN_1002e2e0
        mov     esi, eax
        test    esi, esi
        jl      Lcc5c
        test    bl, bl
        jz      Lcc13
        mov     edi, dword ptr [esp + 0x664]
    Lcbda:
        mov     eax, dword ptr [esp + 0x668]
        push    eax
        push    edi
        lea     ecx, [esp + 0x228]
        call    FUN_1002e320
        mov     esi, eax
        test    esi, esi
        jge     Lcc2d
        mov     ecx, dword ptr [esp + 0x678]
        mov     edx, dword ptr [esp + 0x674]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x228]
        call    FUN_1002e380
        jmp     Lcc60
    Lcc13:
        mov     edx, dword ptr [esp + 0x664]
        push    edx
        call    FUN_10001dd0
        mov     edi, eax
        test    edi, edi
        jnz     Lcbda
        mov     esi, 0x8007000e
        jmp     Lcc60
    Lcc2d:
        lea     eax, [esp + 0x14]
        push    eax
        call    FUN_1001ccf0
        mov     esi, eax
        test    esi, esi
        jl      Lcc60
        push    edi
        push    ebp
        call    FUN_1001d970
        mov     ecx, dword ptr [esp + 0x670]
        pop     edi
        mov     eax, esi
        pop     esi
        mov     dword ptr [ecx], ebp
        pop     ebp
        pop     ebx
        add     esp, 0x650
        ret     0x18
    Lcc5c:
        mov     edi, dword ptr [esp + 0x10]
    Lcc60:
        mov     ecx, ebp
        call    FUN_1001d170
        push    ebp
        call    FUN_10001d60
        add     esp, 0x4
    Lcc70:
        test    edi, edi
        jz      Lcc81
        test    bl, bl
        jnz     Lcc81
        push    edi
        call    FUN_10001d60
        add     esp, 0x4
    Lcc81:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x650
        ret     0x18
    }
}
