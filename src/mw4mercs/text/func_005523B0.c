/*
 * FUN_005523b0 (743 B) — Complex state update function.
 *
 * Updates various state fields (0x758..0x83c) based on iterator
 * state at this+0x65c. Handles three cases: matching iterator,
 * non-empty iterator, and empty iterator. Computes final value
 * at this+0x83c using time delta and FUN_005526a0.
 *
 * __thiscall (ECX = this)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0040c410(void *param);
extern int __stdcall FUN_0041fd80(void);
extern void __stdcall FUN_0041fcd0(int param);
extern void __stdcall FUN_0040c5d0(void *param);
extern void __stdcall FUN_004e8dc0(int param1, void *param2);
extern void __stdcall FUN_0041fcb0(void);
extern void __stdcall FUN_0041c830(void *param1, void *param2);
extern double __stdcall FUN_00707e70(int param);
extern float __stdcall FUN_005526a0(int param1, int param2);

__declspec(naked) void __stdcall FUN_005523b0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007b8d88;
extern int DAT_007b8d90;
extern int DAT_007b8d8c;
__asm {
sub     esp, 0x0c
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        lea     ebp, [esi + 0x830]
        push    0x007b8d88
        mov     ecx, ebp
        call    FUN_0040c410
        push    0x007b8d88
        lea     ecx, [esi + 0x8c8]
        call    FUN_0040c410
        mov eax, dword ptr [DAT_007dab44]
        mov     ebx, dword ptr [eax]
        mov eax, dword ptr [DAT_007dab40]
        lea     edi, [esi + 0x65c]
        mov     ecx, edi
        xor     ebx, eax
        call    FUN_0041fd80
        mov     ecx, dword ptr [ebx + 0x1c]
        xor     ecx, 0x85739531
        cmp     eax, ecx
        mov     ecx, edi
        jnz     label_0x552497
        call    FUN_0041fd80
        lea     ebx, [esi + 0x760]
        push    eax
        mov     ecx, ebx
        call    FUN_0041fcd0
        mov     edx, dword ptr [esi + 0x384]
        push    edx
        lea     ecx, [esi + 0x758]
        call    FUN_0041fcd0
        push    0x007b8d88
        lea     ecx, [esp + 0x14]
        call    FUN_0040c5d0
        mov     ecx, dword ptr [esi + 0x298]
        mov     edx, dword ptr [ecx + 0x18]
        lea     eax, [esp + 0x10]
        push    eax
        push    edx
        call    FUN_004e8dc0
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esi + 0x800]
        call    FUN_0040c410
        lea     ecx, [esp + 0x10]
        lea     edi, [esi + 0x768]
        push    ecx
        mov     ecx, edi
        call    FUN_0040c410
        push    edi
        mov     ecx, edi
        call    FUN_0040c410
        lea     edx, [esi + 0x674]
        push    edx
        mov     ecx, ebp
        mov     dword ptr [esi + 0x774], 0x00000000
        call    FUN_0040c410
        jmp     label_0x5525dd

label_0x552497:
        call    FUN_0041fd80
        test    eax, eax
        jz      label_0x55254f
        mov     ecx, edi
        call    FUN_0041fd80
        lea     ebx, [esi + 0x760]
        push    eax
        mov     ecx, ebx
        call    FUN_0041fcd0
        mov     eax, dword ptr [esi + 0x384]
        push    eax
        lea     ecx, [esi + 0x758]
        call    FUN_0041fcd0
        push    0x007b8d88
        lea     ecx, [esp + 0x14]
        call    FUN_0040c5d0
        mov     ecx, dword ptr [esi + 0x298]
        mov     eax, dword ptr [ecx + 0x18]
        lea     edx, [esp + 0x10]
        push    edx
        push    eax
        call    FUN_004e8dc0
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     ecx, [esi + 0x800]
        call    FUN_0040c410
        mov     ecx, edi
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xd8]
        add     eax, 0x80
        push    eax
        lea     edx, [esp + 0x14]
        lea     edi, [esi + 0x768]
        push    edx
        mov     ecx, edi
        call    FUN_0041c830
        mov     eax, dword ptr [edi]
        mov     ecx, dword ptr [edi + 0x04]
        mov     edx, dword ptr [edi + 0x08]
        mov     dword ptr [edi], eax
        lea     eax, [esi + 0x674]
        mov     dword ptr [edi + 0x04], ecx
        push    eax
        mov     ecx, ebp
        mov     dword ptr [esi + 0x774], 0x00000000
        mov     dword ptr [edi + 0x08], edx
        call    FUN_0040c410
        jmp     label_0x5525dd

label_0x55254f:
        lea     ebx, [esi + 0x760]
        mov     ecx, ebx
        call    FUN_0041fcb0
        mov     ecx, dword ptr [esi + 0x384]
        push    ecx
        lea     ecx, [esi + 0x758]
        call    FUN_0041fcd0
        mov edx, dword ptr [DAT_007b8d88]
        mov ecx, dword ptr [DAT_007b8d90]
        mov eax, dword ptr [DAT_007b8d8c]
        mov     dword ptr [esp + 0x10], edx
        mov     dword ptr [esp + 0x18], ecx
        mov     ecx, dword ptr [esi + 0x298]
        lea     edx, [esp + 0x10]
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [ecx + 0x18]
        push    edx
        push    eax
        call    FUN_004e8dc0
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x18]
        lea     edi, [esi + 0x768]
        mov     dword ptr [esi + 0x800], ecx
        mov     dword ptr [esi + 0x804], edx
        mov     dword ptr [esi + 0x808], eax
        mov     dword ptr [edi], ecx
        mov     dword ptr [edi + 0x04], edx
        mov     dword ptr [edi + 0x08], eax
        mov     dword ptr [edi], ecx
        mov     dword ptr [edi + 0x04], edx
        mov     dword ptr [edi + 0x08], eax
        mov     dword ptr [esi + 0x774], 0x00000000

label_0x5525dd:
        lea     ecx, [esi + 0x66c]
        call    FUN_0041fd80
        test    eax, eax
        jz      label_0x55260e
        lea     edi, [esi + 0x828]
        mov     ecx, edi
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x66c]
        call    FUN_0041fd80
        push    eax
        mov     ecx, edi
        call    FUN_0041fcd0
        jmp     label_0x552648

label_0x55260e:
        lea     ecx, [esi + 0x828]
        call    FUN_0041fcb0
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jz      label_0x552637
        mov     ecx, ebx
        call    FUN_0041fd80
        push    eax
        lea     ecx, [esi + 0x828]
        call    FUN_0041fcd0

label_0x552637:
        mov     ecx, dword ptr [edi]
        mov     edx, dword ptr [edi + 0x04]
        mov     eax, dword ptr [edi + 0x08]
        mov     dword ptr [ebp + 0x00], ecx
        mov     dword ptr [ebp + 0x04], edx
        mov     dword ptr [ebp + 0x08], eax

label_0x552648:
        mov     ecx, dword ptr [esi + 0x384]
        push    ecx
        lea     ecx, [esi + 0x820]
        call    FUN_0041fcd0
        push    0x00
        call    FUN_00707e70
        fsub    qword ptr [esi + 0x64c]
        lea     ecx, [esi + 0x680]
        fstp    qword ptr [esp + 0x10]
        call    FUN_0041fd80
        mov     edx, dword ptr [esi + 0x384]
        push    eax
        push    edx
        mov     ecx, esi
        call    FUN_005526a0
        fdivr   qword ptr [esp + 0x10]
        pop     edi
        fstp    dword ptr [esi + 0x83c]
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x0c
        ret
    }


}
