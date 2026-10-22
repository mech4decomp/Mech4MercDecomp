/* func_006221d0 - ABL interpreter region
 * __thiscall void (this, arg) RET 0x4
 * Iterates multiple vectors, matching entries via a global object lookup,
 * updating counters and re-sorting a result vector.
 */
extern int g_007dab44;
extern int g_007dab40;
extern int g_007f25c0;
extern void __cdecl FUN_006249b0(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_004cdfa0(void);
extern void __cdecl FUN_004ceeb0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0040c0e0(void);
extern void __cdecl FUN_00624fe0(void);
extern void __cdecl FUN_00580520(void);
extern void __cdecl FUN_00580670(void);
extern void __cdecl FUN_00621fd0(void);
extern void __cdecl FUN_00563550(void);
extern void __cdecl FUN_00563c80(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00580620(void);

__declspec(naked) void func_006221d0(void) {
    __asm {
        sub esp, 0x34
        push ebx
        push ebp
        mov ebx, ecx
        mov eax, dword ptr [ebx+0x2d4]
        mov ecx, dword ptr [ebx+0x2d0]
        push esi
        lea ebp, [ebx+0x2d0]
        push edi
        push eax
        push ecx
        mov ecx, ebp
        mov dword ptr [esp+0x1c], ebx
        call FUN_006249b0
        lea ecx, [ebx+0x1a8]
        mov dword ptr [esp+0x20], ecx
        mov dword ptr [esp+0x24], 0x3
    L_62220a:
        mov eax, dword ptr [ecx-4]
        cmp eax, dword ptr [ecx]
        mov dword ptr [esp+0x1c], eax
        jz L_62241b
    L_622219:
        mov edi, dword ptr [eax]
        mov ecx, dword ptr [edi+0x10]
        test ecx, ecx
        jl L_6223fe
        mov edx, dword ptr [g_007dab44]
        mov eax, dword ptr [edx]
        xor eax, dword ptr [g_007dab40]
        push ecx
        mov ecx, dword ptr [eax+0x10]
        xor ecx, 0x85739531
        call FUN_004fcb30
        mov ebx, eax
        test ebx, ebx
        jz L_6223fe
        mov eax, dword ptr [edi+8]
        test eax, eax
        jnz L_622322
        mov eax, dword ptr [g_007dab44]
        mov esi, dword ptr [g_007dab40]
        mov eax, dword ptr [eax]
        xor ecx, ecx
        mov cl, byte ptr [edi+0x18]
        xor eax, esi
        lea esi, [edi+0x18]
        push ecx
        mov ecx, dword ptr [eax+0x14]
        xor ecx, 0x85739531
        call FUN_004cdfa0
        test eax, eax
        jz L_6223fe
        push esi
        mov ecx, eax
        call FUN_004ceeb0
        mov esi, eax
        test esi, esi
        jz L_6223fe
        mov eax, dword ptr [g_007f25c0]
        mov ecx, dword ptr [esi+4]
        push eax
        call FUN_00415230
        cmp al, 0x1
        jnz L_6223fe
        fild dword ptr [edi+0xc]
        mov edx, dword ptr [esi]
        push 0x1
        push ecx
        fstp dword ptr [esp]
        push ebx
        mov ecx, esi
        call dword ptr [edx+0x5c]
        cmp al, 0x1
        jnz L_6223fe
        mov eax, dword ptr [esi+0x10]
        shr eax, 0x13
        test al, 0x1
        jnz L_6223fe
        mov ecx, dword ptr [esp+0x14]
        mov ecx, dword ptr [ecx+0x2d4]
        mov eax, dword ptr [ebp]
        cmp eax, ecx
        mov dword ptr [esp+0x28], esi
        jz L_6222fd
    L_6222ea:
        cmp dword ptr [eax], esi
        jz L_6222f5
        add eax, 4
        cmp eax, ecx
        jnz L_6222ea
    L_6222f5:
        cmp eax, ecx
        jnz L_6223fe
    L_6222fd:
        mov eax, dword ptr [ebp+4]
        cmp eax, dword ptr [ebp+8]
        jz L_622316
        test eax, eax
        jz L_62230b
        mov dword ptr [eax], esi
    L_62230b:
        add eax, 4
        mov dword ptr [ebp+4], eax
        jmp L_6223fe
    L_622316:
        push 0x1
        lea edx, [esp+0x2c]
        push edx
        jmp L_6223f6
    L_622322:
        jge L_6223fe
        mov eax, dword ptr [g_007dab44]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [g_007dab40]
        mov esi, dword ptr [edi+8]
        xor ecx, edx
        mov edx, dword ptr [ecx+0xc]
        mov eax, 0x8133f
        xor edx, 0x85739531
        sub eax, esi
        mov ecx, dword ptr [edx+eax*4]
        call FUN_0041fd80
        test eax, eax
        jz L_6223fe
        add eax, 0x520
        mov dword ptr [esp+0x3c], eax
        mov ecx, dword ptr [eax]
        mov dword ptr [esp+0x40], ecx
        lea ecx, [esp+0x38]
        mov dword ptr [esp+0x38], 0x78cf90
        call FUN_0040c0e0
        test eax, eax
        mov dword ptr [esp+0x18], eax
        jz L_6223fe
    L_622382:
        mov edx, dword ptr [eax+0x10]
        shr edx, 0x13
        test dl, 0x1
        jnz L_6223a2
        fild dword ptr [edi+0xc]
        mov edx, dword ptr [eax]
        push 0x1
        push ecx
        fstp dword ptr [esp]
        push ebx
        mov ecx, eax
        call dword ptr [edx+0x5c]
        test al, al
        jnz L_6223b5
    L_6223a2:
        lea ecx, [esp+0x38]
        call FUN_0040c0e0
        test eax, eax
        mov dword ptr [esp+0x18], eax
        jnz L_622382
        jmp L_6223fe
    L_6223b5:
        mov eax, dword ptr [esp+0x14]
        mov ecx, dword ptr [eax+0x2d4]
        mov eax, dword ptr [ebp]
        cmp eax, ecx
        mov edx, dword ptr [esp+0x18]
        jz L_6223d5
    L_6223ca:
        cmp dword ptr [eax], edx
        jz L_6223d5
        add eax, 4
        cmp eax, ecx
        jnz L_6223ca
    L_6223d5:
        cmp eax, ecx
        jnz L_6223fe
        mov eax, dword ptr [ebp+4]
        cmp eax, dword ptr [ebp+8]
        jz L_6223ef
        test eax, eax
        jz L_6223e7
        mov dword ptr [eax], edx
    L_6223e7:
        add eax, 4
        mov dword ptr [ebp+4], eax
        jmp L_6223fe
    L_6223ef:
        push 0x1
        lea ecx, [esp+0x1c]
        push ecx
    L_6223f6:
        push eax
        mov ecx, ebp
        call FUN_00624fe0
    L_6223fe:
        mov eax, dword ptr [esp+0x1c]
        mov ecx, dword ptr [esp+0x20]
        mov edx, dword ptr [ecx]
        add eax, 4
        cmp eax, edx
        mov dword ptr [esp+0x1c], eax
        jnz L_622219
        mov ebx, dword ptr [esp+0x14]
    L_62241b:
        mov eax, dword ptr [esp+0x24]
        add ecx, 0xc
        dec eax
        mov dword ptr [esp+0x20], ecx
        mov dword ptr [esp+0x24], eax
        jnz L_62220a
        lea edx, [esp+0x13]
        push edx
        lea ecx, [esp+0x30]
        call FUN_00580520
        mov esi, dword ptr [ebp]
        mov ebx, dword ptr [ebx+0x2d4]
        mov edx, dword ptr [esp+0x30]
        mov edi, esi
    L_62244e:
        cmp edi, ebx
        jz L_6224be
    L_622452:
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx+0x4cc]
        cmp eax, 0x8
        mov dword ptr [esp+0x24], eax
        jnz L_622470
        mov eax, dword ptr [ecx]
        call dword ptr [eax+0x60]
        mov edx, dword ptr [esp+0x30]
        mov dword ptr [esp+0x24], eax
    L_622470:
        mov ecx, dword ptr [esp+0x2c]
        mov ebp, ecx
        cmp ebp, edx
        jz L_622485
    L_62247a:
        cmp dword ptr [ecx], eax
        jz L_622485
        add ecx, 4
        cmp ecx, edx
        jnz L_62247a
    L_622485:
        cmp ecx, edx
        jnz L_6224b7
        cmp edx, dword ptr [esp+0x34]
        jz L_6224a2
        test edx, edx
        jz L_622499
        mov dword ptr [edx], eax
        mov edx, dword ptr [esp+0x30]
    L_622499:
        add edx, 4
        mov dword ptr [esp+0x30], edx
        jmp L_6224b7
    L_6224a2:
        push 0x1
        lea ecx, [esp+0x28]
        push ecx
        push edx
        lea ecx, [esp+0x38]
        call FUN_00580670
        mov edx, dword ptr [esp+0x30]
    L_6224b7:
        add edi, 4
        cmp edi, ebx
        __emit 0x75  /* __emit: backward jnz to L_622452; MSVC6 miscomputes rel offset by -4 (call-reloc between branch and target) */
        __emit 0x94
    L_6224be:
        mov eax, dword ptr [esp+0x2c]
        sub edx, eax
        sar edx, 2
        sub edx, 0
        jz L_62259e
        dec edx
        jz L_62252e
        cmp esi, ebx
        jz L_622583
    L_6224db:
        mov edi, dword ptr [esp+0x48]
    L_6224df:
        mov edx, dword ptr [esi]
        mov ebx, dword ptr [esp+0x14]
        push edi
        add edx, 0x14
        push edx
        push 0x21
        mov ecx, ebx
        call FUN_00621fd0
        mov eax, dword ptr [esi]
        push edi
        add eax, 0x14
        push eax
        push 0x22
        mov ecx, ebx
        call FUN_00621fd0
        mov ecx, dword ptr [esi]
        xor edx, edx
        mov dl, byte ptr [ecx+0x14]
        push edi
        push edx
        push 0x78cf84
        call FUN_00563550
        push eax
        call FUN_00563c80
        mov eax, dword ptr [ebx+0x2d4]
        add esi, 4
        add esp, 0x10
        cmp esi, eax
        __emit 0x75  /* __emit: backward jnz to L_6224df; MSVC6 miscomputes rel offset by -4 */
        __emit 0xB3
        jmp L_622583
    L_62252e:
        cmp esi, ebx
        jz L_622583
    L_622536:
        mov edi, dword ptr [esp+0x48]
        mov eax, dword ptr [esi]
        mov ebx, dword ptr [esp+0x14]
        push edi
        add eax, 0x14
        push eax
        push 0x21
        mov ecx, ebx
        call FUN_00621fd0
        mov ecx, dword ptr [esi]
        push edi
        add ecx, 0x14
        push ecx
        push 0x23
        mov ecx, ebx
        call FUN_00621fd0
        mov edx, dword ptr [esi]
        xor eax, eax
        mov al, byte ptr [edx+0x14]
        push edi
        push eax
        push 0x78cf78
        call FUN_00563550
        push eax
        call FUN_00563c80
        mov eax, dword ptr [ebx+0x2d4]
        add esi, 4
        add esp, 0x10
        cmp esi, eax
        __emit 0x75  /* __emit: backward jnz to L_622536; MSVC6 miscomputes rel offset by -4 */
        __emit 0xB3
    L_622583:
        mov eax, dword ptr [esp+0x2c]
        test eax, eax
        jz L_6225b1
        push eax
        call FUN_004084e0
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 4
    L_62259e:
        mov ecx, dword ptr [esp+0x34]
        sub ecx, eax
        sar ecx, 2
        push ecx
        push eax
        call FUN_00580620
        add esp, 8
    L_6225b1:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 4
    }
}
