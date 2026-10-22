/*
 * FUN_0072f6c0 (115 B) - __thiscall helper (RET 0x4).
 *
 * If global 0x0085b4a0 != 1 and FUN_00704a80(0x27,0,0,0) returns a value
 * with bit 1 set, and the byte at [this->field_0xc + 0x858128] is nonzero,
 * walks a linked list rooted at *this (next at +0x100), calling
 * FUN_00755710 for each node with a nonzero +0x48 (guarded by global
 * 0x0087dd0a). Then sets this->field_0x20 = 1 and stores the double
 * result of FUN_00707e70(0) into this->field_0x18.
 *
 * __thiscall (ECX = this), RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0085b4a0;
extern char g_0087dd0a;
extern void __cdecl FUN_00704a80(void);
extern void __cdecl FUN_00755710(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void __cdecl FUN_0072f6c0(void)
{
    __asm {
        cmp     dword ptr [g_0085b4a0], 0x1
        push    ebp
        mov     ebp, ecx
        jz      label_72f72f
        push    0x0
        push    0x0
        push    0x0
        push    0x27
        call    FUN_00704a80
        test    al, 0x2
        jz      label_72f72f
        mov     eax, dword ptr [ebp + 0xc]
        mov     cl, byte ptr [eax + 0x858128]
        test    cl, cl
        jz      label_72f72f
        push    esi
        mov     esi, dword ptr [ebp]
        test    esi, esi
        jz      label_72f720
        push    edi
        mov     edi, dword ptr [esp + 0x10]
label_72f6f7:
        mov     eax, dword ptr [esi + 0x48]
        test    eax, eax
        jz      label_72f715
        push    0x0
        push    edi
        push    eax
        mov     byte ptr [g_0087dd0a], 0x1
        call    FUN_00755710
        mov     byte ptr [g_0087dd0a], 0x0
label_72f715:
        mov     esi, dword ptr [esi + 0x100]
        test    esi, esi
        jnz     label_72f6f7
        pop     edi
label_72f720:
        push    0x0
        mov     byte ptr [ebp + 0x20], 0x1
        call    FUN_00707e70
        fstp    qword ptr [ebp + 0x18]
        pop     esi
label_72f72f:
        pop     ebp
        ret     0x4
    }
}
