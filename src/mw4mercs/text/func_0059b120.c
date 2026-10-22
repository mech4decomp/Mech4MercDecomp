/*
 * FUN_0059B120 (97 B) — __thiscall method, RET 0, no stack params.
 *
 * Calls FUN_005F07C0, does vtable dispatch, calls FUN_005FBE90,
 * conditionally calls FUN_005F0820 and does FPU addition.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__stdcall FUN_005f07c0(void);
extern int __stdcall FUN_005fbe90(void);
extern int __stdcall FUN_005f0820(void);

__declspec(naked) void __stdcall FUN_0059b120(void)
{
    
__asm {
push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx                    ; esi = this
        call    FUN_005f07c0
        mov     edi, eax                    ; edi = result
        mov     eax, [edi + 0x78]
        lea     ecx, [edi + 0x78]
        mov     [esi + 0x17C], edi
        call    dword ptr [eax + 4]
        mov     ebp, eax                    ; ebp = vcall result
        mov     ecx, [ebp + 0x664]
        push    ecx
        mov     ecx, edi
        xor     bl, bl
        call    FUN_005fbe90
        test    al, al
        je      L_return_false
        mov     ecx, esi
        call    FUN_005f0820
        test    al, al
        je      L_end
        fld     dword ptr [ebp + 0x664]
        mov     esi, [esi + 0x17C]
        fadd    dword ptr [esi + 0x3B8]
        pop     edi
        fstp    dword ptr [esi + 0x3B8]
        pop     esi
        pop     ebp
        pop     ebx
        ret

    L_return_false:
        mov     al, bl                      ; al = 0

    L_end:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }


}
