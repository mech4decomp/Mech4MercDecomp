/*
 * FUN_0060d820 (162 B) — __thiscall (ECX = this). If *(this+4) is
 * non-null, calls FUN_00416b60(param2); walks a linked list at
 * +0x94, filtering via FUN_00415230(0x7f25a8); on match calls
 * virtuals at +0xa4/+0x104, FUN_0060d4b0 and virtual [EAX]. Then
 * calls FUN_0060fcf0 with a computed ECX. RET 8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7f25a8;
extern int g_7dab44;
extern int g_7dab40;
extern void __cdecl FUN_00416b60(void);
extern char __cdecl FUN_00415230(void);
extern void __cdecl FUN_0060d4b0(void);
extern void __cdecl FUN_0060fcf0(void);

__declspec(naked) void __fastcall FUN_0060d820(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x4]
        test    eax, eax
        push    esi
        push    edi
        jz      L_899
        mov     ecx, dword ptr [esp + 0x18]
        push    ecx
        lea     ecx, [eax + 0x384]
        call    FUN_00416b60
        test    eax, eax
        jz      L_8bb
        mov     edi, dword ptr [eax + 0x94]
        xor     ebp, ebp
        test    edi, edi
        jz      L_899
L_849:
        mov     esi, dword ptr [edi]
        test    esi, esi
        mov     edi, dword ptr [edi + 0x4]
        jz      L_899
        mov     eax, dword ptr [g_7f25a8]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        /* __emit: backward jz to L_849 off-by-4 (call-reloc between branch and target) */
        __emit 0x74
        __emit 0xE1
        mov     edx, dword ptr [esp + 0x14]
        cmp     ebp, dword ptr [edx]
        jnz     L_896
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0xa4]
        mov     ecx, dword ptr [ebx + 0x4]
        mov     edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx + 0x104]
        push    esi
        mov     ecx, ebx
        call    FUN_0060d4b0
        mov     eax, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [eax]
L_896:
        inc     ebp
        /* __emit: backward jmp to L_849 off-by-4 (call-reloc between branch and target) */
        __emit 0xEB
        __emit 0xB0
L_899:
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [edx + 0xc]
        xor     ecx, 0x85739531
        add     ecx, 0xf4
        call    FUN_0060fcf0
L_8bb:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    }
}
