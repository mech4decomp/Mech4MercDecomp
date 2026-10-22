/* FUN_00597c30 - 1059 bytes */
/* __stdcall, this in ecx */

__declspec(naked) void FUN_00597c30(void)
{
    

extern void __cdecl FUN_004c41d0(void);
extern void __cdecl FUN_0040c0e0(void);
extern int DAT_007dab40;
extern int DAT_007dab44;
extern void __cdecl FUN_0059ced0(void);
extern void __cdecl FUN_0059cf10(void);
extern void __cdecl FUN_0059cf30(void);
extern void __cdecl FUN_0059cf50(void);
extern void __cdecl FUN_0059cef0(void);
extern void __cdecl FUN_0059d400(void);
__asm {
sub esp, 0x10
        push ebp
        add ecx, 0x10
        push edi
        push ecx
        lea ecx, [esp + 0x10]
        call FUN_004c41d0
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0xc], 0x77a080
        call FUN_0040c0e0
        mov edi, eax
        xor ebp, ebp
        cmp edi, ebp
        je label_0x59804d

label_0x597c5f:
        push ebx
        push esi

label_0x597c61:
        mov eax, [edi + 0x18]
        xor bl, bl
        cmp eax, 2
        mov [esp + 0x12], bl
        mov [esp + 0x13], bl
        je label_0x59800f
        mov eax, [edi + 0x90]
        cmp eax, ebp
        mov ecx, dword ptr [DAT_007dab40]
        mov edx, dword ptr [DAT_007dab44]
        jl label_0x597ca7
        mov esi, [edx]
        xor esi, ecx
        mov esi, [esi + 0x44]
        xor esi, 0x85739531
        mov esi, [esi + 0x1c]
        cmp [esi + 0x28], eax
        jl label_0x597ca7
        mov byte ptr [esp + 0x13], 1

label_0x597ca7:
        mov esi, [edi + 0x94]
        cmp esi, ebp
        jl label_0x597cce
        mov eax, [edx]
        xor eax, ecx
        mov eax, [eax + 0x44]
        xor eax, 0x85739531
        mov ecx, [eax + 0x1c]
        call FUN_0059ced0
        cmp eax, esi
        jl label_0x597cce
        mov byte ptr [esp + 0x13], 1

label_0x597cce:
        mov esi, [edi + 0x98]
        cmp esi, ebp
        jl label_0x597d00
        mov ecx, dword ptr [DAT_007dab44]
        mov eax, [ecx]
        xor eax, dword ptr [DAT_007dab40]
        mov edx, [eax + 0x44]
        xor edx, 0x85739531
        mov ecx, [edx + 0x1c]
        call FUN_0059cf10
        cmp eax, esi
        jl label_0x597d00
        mov byte ptr [esp + 0x13], 1

label_0x597d00:
        mov esi, [edi + 0x9c]
        cmp esi, ebp
        jl label_0x597d33
        mov eax, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov eax, [eax]
        xor eax, ecx
        mov ecx, [eax + 0x44]
        xor ecx, 0x85739531
        mov ecx, [ecx + 0x1c]
        call FUN_0059cf30
        cmp eax, esi
        jl label_0x597d33
        mov byte ptr [esp + 0x13], 1

label_0x597d33:
        mov esi, [edi + 0xa0]
        cmp esi, ebp
        jl label_0x597d66
        mov edx, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov eax, [edx]
        xor eax, ecx
        mov eax, [eax + 0x44]
        xor eax, 0x85739531
        mov ecx, [eax + 0x1c]
        call FUN_0059cf50
        cmp eax, esi
        jl label_0x597d66
        mov byte ptr [esp + 0x13], 1

label_0x597d66:
        mov esi, [edi + 0xa4]
        cmp esi, ebp
        jl label_0x597d98
        mov ecx, dword ptr [DAT_007dab44]
        mov eax, [ecx]
        xor eax, dword ptr [DAT_007dab40]
        mov edx, [eax + 0x44]
        xor edx, 0x85739531
        mov ecx, [edx + 0x1c]
        call FUN_0059cef0
        cmp eax, esi
        jl label_0x597d98
        mov byte ptr [esp + 0x13], 1

label_0x597d98:
        mov al, [edi + 0xb0]
        test al, al
        jne label_0x597db4
        cmp [edi + 0x2c], ebp
        je label_0x597db0
        cmp [edi + 0x24], ebp
        jne label_0x597f64

label_0x597db0:
        test al, al
        je label_0x597db8

label_0x597db4:
        mov bl, 1
        jmp label_0x597dc4

label_0x597db8:
        cmp [edi + 0x24], ebp
        je label_0x597dc4
        xor bl, bl
        mov byte ptr [esp + 0x12], 1

label_0x597dc4:
        cmp [edi + 0x2c], ebp
        jne label_0x597dd0
        cmp [edi + 0x24], ebp
        jne label_0x597dd0
        xor bl, bl

label_0x597dd0:
        mov eax, [edi + 0x68]
        cmp eax, ebp
        jl label_0x597e09
        mov ecx, dword ptr [DAT_007dab44]
        mov edx, [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov ecx, [edx + 0x44]
        xor ecx, 0x85739531
        mov edx, [ecx + 0x1c]
        cmp [edx + 0x28], eax
        jl label_0x597e02
        mov al, [esp + 0x12]
        test al, al
        jne label_0x597e09
        mov bl, 1
        jmp label_0x597e09

label_0x597e02:
        xor bl, bl
        mov byte ptr [esp + 0x12], 1

label_0x597e09:
        mov esi, [edi + 0x70]
        cmp esi, ebp
        jl label_0x597e67
        mov eax, dword ptr [DAT_007dab44]
        mov edx, dword ptr [DAT_007dab40]
        mov ecx, [eax]
        xor ecx, edx
        mov edx, [ecx + 0x44]
        xor edx, 0x85739531
        mov ecx, [edx + 0x1c]
        call FUN_0059d400
        mov eax, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov eax, [eax]
        xor eax, ecx
        mov ecx, [eax + 0x44]
        xor ecx, 0x85739531
        mov ecx, [ecx + 0x1c]
        call FUN_0059ced0
        cmp eax, esi
        jl label_0x597e60
        mov al, [esp + 0x12]
        test al, al
        jne label_0x597e67
        mov bl, 1
        jmp label_0x597e67

label_0x597e60:
        xor bl, bl
        mov byte ptr [esp + 0x12], 1

label_0x597e67:
        mov esi, [edi + 0x74]
        cmp esi, ebp
        jl label_0x597ea7
        mov edx, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov eax, [edx]
        xor eax, ecx
        mov eax, [eax + 0x44]
        xor eax, 0x85739531
        mov ecx, [eax + 0x1c]
        xor bl, bl
        call FUN_0059cf10
        cmp eax, esi
        jl label_0x597ea0
        mov al, [esp + 0x12]
        test al, al
        jne label_0x597ea7
        mov bl, 1
        jmp label_0x597ea7

label_0x597ea0:
        xor bl, bl
        mov byte ptr [esp + 0x12], 1

label_0x597ea7:
        mov esi, [edi + 0x78]
        cmp esi, ebp
        jl label_0x597ee6
        mov ecx, dword ptr [DAT_007dab44]
        mov eax, [ecx]
        xor eax, dword ptr [DAT_007dab40]
        mov edx, [eax + 0x44]
        xor edx, 0x85739531
        mov ecx, [edx + 0x1c]
        xor bl, bl
        call FUN_0059cf30
        cmp eax, esi
        jl label_0x597edf
        mov al, [esp + 0x12]
        test al, al
        jne label_0x597ee6
        mov bl, 1
        jmp label_0x597ee6

label_0x597edf:
        xor bl, bl
        mov byte ptr [esp + 0x12], 1

label_0x597ee6:
        mov esi, [edi + 0x7c]
        cmp esi, ebp
        jl label_0x597f26
        mov eax, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov eax, [eax]
        xor eax, ecx
        mov ecx, [eax + 0x44]
        xor ecx, 0x85739531
        mov ecx, [ecx + 0x1c]
        xor bl, bl
        call FUN_0059cf50
        cmp eax, esi
        jl label_0x597f1f
        mov al, [esp + 0x12]
        test al, al
        jne label_0x597f26
        mov bl, 1
        jmp label_0x597f26

label_0x597f1f:
        xor bl, bl
        mov byte ptr [esp + 0x12], 1

label_0x597f26:
        mov esi, [edi + 0x80]
        cmp esi, ebp
        jl label_0x597f64
        mov edx, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov eax, [edx]
        xor eax, ecx
        mov eax, [eax + 0x44]
        xor eax, 0x85739531
        mov ecx, [eax + 0x1c]
        xor bl, bl
        call FUN_0059cef0
        cmp eax, esi
        jl label_0x597f62
        mov al, [esp + 0x12]
        test al, al
        jne label_0x597f64
        mov bl, 1
        jmp label_0x597f64

label_0x597f62:
        xor bl, bl

label_0x597f64:
        mov ecx, [edi + 0x6c]
        cmp ecx, ebp
        jl label_0x597f9d
        mov eax, [edi + 0x8c]
        cmp eax, ebp
        jl label_0x597f9d
        mov edx, dword ptr [DAT_007dab44]
        mov edx, [edx]
        xor edx, dword ptr [DAT_007dab40]
        mov edx, [edx + 0x44]
        xor edx, 0x85739531
        mov edx, [edx + 0x1c]
        mov edx, [edx + 0x28]
        sub edx, eax
        cmp edx, ecx
        jl label_0x597f9d
        mov byte ptr [esp + 0x13], 1

label_0x597f9d:
        cmp bl, 1
        jne label_0x597fe8
        mov al, [esp + 0x13]
        test al, al
        jne label_0x597fe8
        mov al, [edi + 0xb1]
        test al, al
        jne label_0x597ff9
        mov ecx, [edi + 0x18]
        mov eax, 1
        cmp ecx, eax
        je label_0x597fe3
        mov ecx, dword ptr [DAT_007dab44]
        mov edx, [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov ecx, [edx + 0x44]
        xor ecx, 0x85739531
        mov edx, [ecx + 0x1c]
        mov ecx, [edx + 0x28]
        mov [edi + 0x8c], ecx

label_0x597fe3:
        mov [edi + 0x18], eax
        jmp label_0x597ff9

label_0x597fe8:
        cmp byte ptr [esp + 0x13], 1
        jne label_0x597ff9
        mov [edi + 0x18], ebp
        mov byte ptr [edi + 0xb1], 1

label_0x597ff9:
        mov eax, [edi + 0x88]
        cmp eax, ebp
        jl label_0x59800f
        cmp [edi + 0x50], eax
        jl label_0x59800f
        mov dword ptr [edi + 0x18], 2

label_0x59800f:
        mov eax, [edi + 0x84]
        cmp eax, ebp
        jle label_0x598038
        sub eax, ebp
        je label_0x598035
        dec eax
        je label_0x59802c
        dec eax
        jne label_0x598038
        mov dword ptr [edi + 0x18], 2
        jmp label_0x598038

label_0x59802c:
        mov dword ptr [edi + 0x18], 1
        jmp label_0x598038

label_0x598035:
        mov [edi + 0x18], ebp

label_0x598038:
        lea ecx, [esp + 0x14]
        call FUN_0040c0e0
        mov edi, eax
        cmp edi, ebp
        jne label_0x597c61
        pop esi
        pop ebx

label_0x59804d:
        pop edi
        pop ebp
        add esp, 0x10
        ret
    }


}
