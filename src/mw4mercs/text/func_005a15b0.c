/*
 * FUN_005a15b0 (127 B) — Linked list traversal / find function.
 *
 * __stdcall, RET 0x4 (one stack param).
 * Walks a linked list, checks flags, calls test function.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  __stdcall FUN_005a1630(int, int);
extern void __stdcall FUN_0040c5d0(void *);
extern int  __fastcall FUN_005a14a0(int);
extern void __stdcall FUN_00559be0(int);
extern void __fastcall FUN_005a1310(int);

__declspec(naked) int __stdcall FUN_005a15b0(int param_1)
{
    

extern int DAT_007f202c;
__asm {
mov eax, dword ptr [DAT_007f202c]
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    esi
        push    edi
        mov     edi, dword ptr [eax]
loop_start:
        test    edi, edi
        jz      ret_null
        mov     esi, dword ptr [edi]
        test    esi, esi
        mov     edi, dword ptr [edi + 0x4]
        jz      ret_null
        mov     eax, dword ptr [esi + 0x10]
        shr     eax, 0x13
        test    al, 0x1
        jnz     loop_start
        mov     edx, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [edx + 0x4]
        mov     eax, dword ptr [eax + 0x308]
        push    0x0
        push    eax
        mov     ecx, esi
        call    FUN_005a1630
        sub     esp, 0xc
        add     eax, 0x2fc
        mov     ecx, esp
        push    eax
        call    FUN_0040c5d0
        push    ebx
        mov     ecx, esi
        call    FUN_005a14a0
        test    al, al
        jz      loop_start
        mov     ecx, dword ptr [ebx + 0x3b0]
        test    ecx, ecx
        jz      call_5a1310
        push    0x38
        call    FUN_00559be0
call_5a1310:
        push    ebx
        mov     ecx, esi
        call    FUN_005a1310
        mov     eax, esi
        pop     edi
        pop     esi
        pop     ebx
        ret
ret_null:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        ret
    }


}
