// 0x00568790: FUN_00568790 - vehicle AI selection function
// __cdecl, 1 param (uint param_1)
// Returns void

__declspec(naked) void __cdecl func_00568790(unsigned int param_1)
{
    

extern void __cdecl FUN_005805a2(void);
extern void __cdecl FUN_00580ba5(void);
extern void __cdecl FUN_100566c38(void);
extern void __cdecl FUN_0064e5ae(void);
extern void __cdecl FUN_0064e4de(void);
extern void __cdecl FUN_0064e095(void);
extern void __cdecl FUN_0064e08c(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_1004fca93(void);
extern int DAT_007f268c;
extern void __cdecl FUN_100415174(void);
extern int DAT_007f24d8;
extern void __cdecl FUN_100415158(void);
extern void __cdecl FUN_0058090a(void);
extern void __cdecl FUN_0064e000(void);
extern void __cdecl FUN_00707d4d(void);
extern int DAT_0077f684;
extern void __cdecl FUN_1004fc9c3(void);
extern int DAT_0080592c;
extern int DAT_00805928;
extern void __cdecl FUN_100562e7c(void);
extern void __cdecl FUN_005803df(void);
extern void __cdecl FUN_100562e31(void);
extern void __cdecl FUN_00580404(void);
__asm {
sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        lea eax, [esp + 0x14]
        push eax
        lea ecx, [esp + 0x17]
        xor ebx, ebx
        push ecx
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x20], ebx
        mov dword ptr [esp + 0x24], ebx
        mov dword ptr [esp + 0x1c], ebx
        call FUN_005805a2
        mov esi, dword ptr [esp + 0x28]
        test esi, 0xf00000
        jz load_from_db
        lea edx, [esp + 0x18]
        push edx
        add esi, 0xff100000
        push esi
        call FUN_00580ba5
        add esp, 8
        jmp epilogue_check
load_from_db:
        call FUN_100566c38
        mov edi, eax
        push esi
        mov ecx, edi
        call FUN_0064e5ae
        test al, al
        jz epilogue_check
        push esi
        mov ecx, edi
        call FUN_0064e4de
        mov ebp, eax
        mov ecx, ebp
        call FUN_0064e095
        mov edi, dword ptr [eax]
        mov ecx, ebp
        call FUN_0064e08c
        cmp edi, dword ptr [eax + 4]
        jz epilogue_check
loop_start:
        mov eax, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov eax, dword ptr [eax]
        xor eax, ecx
        mov ecx, dword ptr [edi]
        push ecx
        mov ecx, dword ptr [eax + 0x10]
        xor ecx, 0x85739531
        call FUN_1004fca93
        mov esi, eax
        cmp esi, ebx
        jz loop_next
        mov edx, dword ptr [esi + 0x10]
        shr edx, 0x13
        test dl, 1
        jnz loop_next
        mov eax, dword ptr [DAT_007f268c]
        mov ecx, dword ptr [esi + 4]
        push eax
        call FUN_100415174
        cmp al, 1
        jnz loop_next
        mov esi, dword ptr [esi + 0x2fc]
        cmp esi, ebx
        jz loop_next
        mov eax, dword ptr [DAT_007f24d8]
        mov ecx, dword ptr [esi + 4]
        push eax
        call FUN_100415158
        cmp al, 1
        jnz loop_next
        cmp byte ptr [esi + 0x2f9], bl
        jnz loop_next
        lea eax, [esp + 0x28]
        push eax
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x2c], esi
        call FUN_0058090a
loop_next:
        mov ecx, ebp
        add edi, 4
        call FUN_0064e000
        cmp edi, dword ptr [eax + 4]
        jnz loop_start
epilogue_check:
        mov eax, dword ptr [esp + 0x18]
        cmp eax, dword ptr [esp + 0x1c]
        mov ebp, eax
        jz no_candidates
candidate_loop:
        mov edi, dword ptr [ebp]
        push 0
        call FUN_00707d4d
        fsub dword ptr [DAT_0077f684]
        fld dword ptr [edi + 0x1d8]
        fcompp
        fnstsw ax
        test ah, 0x41
        jnz candidate_next
        mov ecx, dword ptr [DAT_007dab44]
        mov edx, dword ptr [DAT_007dab40]
        mov eax, dword ptr [ecx]
        xor eax, edx
        mov edx, dword ptr [eax + 0x10]
        xor edx, 0x85739531
        jz candidate_next
        mov ecx, dword ptr [edi + 0x1d4]
        cmp ecx, -1
        jz candidate_next
        push ecx
        mov ecx, dword ptr [eax + 0x10]
        xor ecx, 0x85739531
        call FUN_1004fc9c3
        mov esi, eax
        test esi, esi
        jz candidate_next
        mov eax, dword ptr [esi + 0x10]
        shr eax, 0x13
        and al, 1
        cmp al, 1
        jz candidate_next
        mov ecx, dword ptr [edi + 0x170]
        cmp esi, ecx
        jz candidate_next
        test ecx, ecx
        jz found_candidate
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x60]
        mov ebx, eax
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax + 0x60]
        cmp eax, ebx
        jnz found_candidate
        mov edx, dword ptr [edi]
        mov ecx, edi
        call dword ptr [edx + 0xc8]
        cmp al, 1
        jnz found_candidate
candidate_next:
        mov eax, dword ptr [esp + 0x1c]
        add ebp, 4
        cmp ebp, eax
        jz no_candidates
        jmp candidate_loop
found_candidate:
        mov edi, dword ptr [DAT_0080592c]
        mov eax, dword ptr [DAT_00805928]
        mov esi, dword ptr [esi + 0x30]
        add edi, 4
        add eax, 0xa000
        cmp edi, eax
        mov dword ptr [DAT_0080592c], edi
        jc store_found
        push 0
        call FUN_100562e7c
        add esp, 4
store_found:
        mov dword ptr [edi], esi
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x20]
        sub ecx, eax
        sar ecx, 2
        push ecx
        push eax
        lea ecx, [esp + 0x28]
        call FUN_005803df
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret
no_candidates:
        mov esi, dword ptr [DAT_0080592c]
        mov edx, dword ptr [DAT_00805928]
        add esi, 4
        add edx, 0xa000
        cmp esi, edx
        mov dword ptr [DAT_0080592c], esi
        jc store_default
        push 0
        call FUN_100562e31
        add esp, 4
store_default:
        mov dword ptr [esi], 0xfffffffe
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x20]
        sub ecx, eax
        sar ecx, 2
        push ecx
        push eax
        call FUN_00580404
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret
    }


}
