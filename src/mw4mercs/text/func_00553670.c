/*
 * FUN_00553670 (378 B) — State update with encrypted global access.
 *
 * Reads/writes encrypted globals at 0x007dab44/0x007dab40.
 * Calls FUN_00551c20, FUN_00627420, FUN_00627460, virtual methods.
 * Updates fields at [encrypted_ptr+0x40]->0xa0, 0xa4, 0xa8.
 *
 * __thiscall (ECX = this)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_0041fd80(void);
extern int __stdcall FUN_00551c20(int param);
extern void __stdcall FUN_00627420(int param);
extern int __stdcall FUN_00415230(int param1, int param2);
extern void __stdcall FUN_00627460(int param);

__declspec(naked) void __stdcall FUN_00553670(void)
{
    

extern int DAT_007dab40;
extern int DAT_007dab44;
extern int DAT_007f25c0;
extern int DAT_007dc700;
__asm {
push    ebx
        push    ebp
        push    esi
        mov     ebp, ecx
        push    edi
        lea     ecx, [ebp + 0x65c]
        call    FUN_0041fd80
        push    eax
        mov     ecx, ebp
        call    FUN_00551c20
        mov edi, dword ptr [DAT_007dab40]
        mov     esi, eax
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, edi
        mov     ecx, dword ptr [ecx + 0x40]
        push    esi
        xor     ecx, 0x85739531
        call    FUN_00627420
        xor     edi, edi
        xor     bl, bl
        cmp     esi, edi
        jz      label_0x5536cd
        mov eax, dword ptr [DAT_007f25c0]
        mov     ecx, dword ptr [esi + 0x04]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      label_0x5536cd
        cmp     dword ptr [esi + 0x3e8], edi
        jz      label_0x5536cd
        mov     bl, 0x01

label_0x5536cd:
        mov edx, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x40]
        add     eax, 0x40
        xor     ecx, 0x85739531
        cmp     esi, edi
        mov     byte ptr [ecx + 0xa0], bl
        jz      label_0x55377e
        mov eax, dword ptr [DAT_007dc700]
        mov     ecx, dword ptr [esi + 0x04]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     label_0x553764
        mov edx, dword ptr [DAT_007dab44]
        mov     edi, dword ptr [edx]
        mov edx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        xor     edi, edx
        call    dword ptr [eax + 0x24]
        mov     ecx, dword ptr [edi + 0x40]
        push    eax
        xor     ecx, 0x85739531
        call    FUN_00627460
        mov ecx, dword ptr [DAT_007dab44]
        mov     edi, dword ptr [ecx]
        mov ebx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        xor     edi, ebx
        call    dword ptr [edx + 0x60]
        mov     ecx, dword ptr [edi + 0x40]
        xor     ecx, 0x85739531
        mov     dword ptr [ecx + 0xa4], eax
        mov ecx, dword ptr [DAT_007dab40]
        mov eax, dword ptr [DAT_007dab44]
        xor     edi, edi
        jmp     label_0x5537ae

label_0x553764:
        mov edx, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x40]
        push    0x76b768
        jmp     label_0x553785

label_0x55377e:
        mov     ecx, dword ptr [eax]
        push    0x76b768

label_0x553785:
        xor     ecx, 0x85739531
        call    FUN_00627460
        mov eax, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [eax]
        mov ecx, dword ptr [DAT_007dab40]
        xor     edx, ecx
        mov     edx, dword ptr [edx + 0x40]
        xor     edx, 0x85739531
        mov     dword ptr [edx + 0xa4], edi

label_0x5537ae:
        mov     edx, dword ptr [ebp + 0x298]
        cmp     edx, edi
        jz      label_0x5537d3
        mov     eax, dword ptr [eax]
        fld     dword ptr [edx + 0x18]
        pop     edi
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x40]
        pop     esi
        xor     ecx, 0x85739531
        pop     ebp
        fstp    dword ptr [ecx + 0xa8]
        pop     ebx
        ret

label_0x5537d3:
        mov     edx, dword ptr [eax]
        xor     edx, ecx
        mov     eax, dword ptr [edx + 0x40]
        xor     eax, 0x85739531
        mov     dword ptr [eax + 0xa8], edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }


}
