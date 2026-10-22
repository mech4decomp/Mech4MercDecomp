/* auto-transcribed gap function 0x5E00308C (772 B); review against reference; stepping stone */
extern void __cdecl FUN_5e003050(void);
extern void __cdecl FUN_5e003070(void);
extern void __cdecl FUN_5e003237(void);
extern void __cdecl FUN_5e00329b(void);
extern void __cdecl FUN_5e003360(void);
extern void __cdecl FUN_5e003372(void);
extern int g_5e035a9c;
__declspec(naked) void FUN_5e00308c(void)
{
    __asm {
            nop
            nop
            nop
            nop
            mov al, byte ptr [esp + 0x10]
            sub esp, 0xe8
            push esi
            xor esi, esi
            test al, 4
            je lbl_5e0030b0
            mov eax, 0x80004001
            pop esi
            add esp, 0xe8
            ret 0x1c
        lbl_5e0030b0:
            push ebx
            push ebp
            test al, 1
            push edi
            je FUN_5e003237
            mov ecx, 0x18
            xor eax, eax
            lea edi, [esp + 0x1c]
            mov dword ptr [esp + 0x18], 0x64
            rep stosd
            __emit 0xb9 /* mov ecx, 0x1e: MSVC6 cannot encode natively */
            __emit 0x1e /* mov ecx, 0x1e: MSVC6 cannot encode natively */
            __emit 0x00 /* mov ecx, 0x1e: MSVC6 cannot encode natively */
            __emit 0x00 /* mov ecx, 0x1e: MSVC6 cannot encode natively */
            __emit 0x00 /* mov ecx, 0x1e: MSVC6 cannot encode natively */
            lea edi, [esp + 0x80]
            mov dword ptr [esp + 0x7c], 0x7c
            lea edx, [esp + 0x7c]
            rep stosd
            __emit 0x8b /* mov eax, dword ptr [esp + 0xfc]: MSVC6 cannot encode natively */
            __emit 0x84 /* mov eax, dword ptr [esp + 0xfc]: MSVC6 cannot encode natively */
            __emit 0x24 /* mov eax, dword ptr [esp + 0xfc]: MSVC6 cannot encode natively */
            __emit 0xfc /* mov eax, dword ptr [esp + 0xfc]: MSVC6 cannot encode natively */
            __emit 0x00 /* mov eax, dword ptr [esp + 0xfc]: MSVC6 cannot encode natively */
            __emit 0x00 /* mov eax, dword ptr [esp + 0xfc]: MSVC6 cannot encode natively */
            __emit 0x00 /* mov eax, dword ptr [esp + 0xfc]: MSVC6 cannot encode natively */
            push edx
            mov edi, dword ptr [eax + 4]
            mov eax, dword ptr [edi + 0x4270]
            push eax
            mov ecx, dword ptr [eax]
            call dword ptr [ecx + 0x58]
            mov esi, eax
            test esi, esi
            jl FUN_5e003372
            mov eax, dword ptr [esp + 0xd4]
            push eax
            call FUN_5e003050
            push 0xff0000
            mov ebp, eax
            call FUN_5e003050
            sub ebp, eax
            mov ecx, dword ptr [esp + 0xd8]
            push ecx
            call FUN_5e003050
            push 0xff00
            mov ebx, eax
            call FUN_5e003050
            sub ebx, eax
            mov edx, dword ptr [esp + 0xdc]
            push edx
            call FUN_5e003050
            push 0xff
            mov dword ptr [esp + 0x14], eax
            call FUN_5e003050
            push ebp
            mov ebp, dword ptr [esp + 0x110]
            mov ecx, dword ptr [esp + 0x14]
            mov edx, ebp
            and edx, 0xff0000
            sub ecx, eax
            push edx
            mov dword ptr [esp + 0x18], ecx
            call FUN_5e003070
            push ebx
            mov dword ptr [esp + 0x18], eax
            mov eax, ebp
            and eax, 0xff00
            push eax
            call FUN_5e003070
            and ebp, 0xff
            mov ebx, eax
            mov ecx, dword ptr [esp + 0x10]
            push ecx
            push ebp
            call FUN_5e003070
            mov edx, dword ptr [esp + 0xdc]
            mov ecx, dword ptr [esp + 0xd4]
            mov ebp, dword ptr [esp + 0x14]
            and edx, eax
            mov eax, dword ptr [esp + 0xd8]
            and ecx, ebp
            mov ebp, dword ptr [esp + 0x100]
            and eax, ebx
            or edx, eax
            or edx, ecx
            test ebp, ebp
            mov dword ptr [esp + 0x68], edx
            jbe lbl_5e003237
            mov ebx, dword ptr [esp + 0x104]
        lbl_5e0031da:
            mov eax, dword ptr [edi + 0x4270]
            lea ecx, [esp + 0x18]
            push ecx
            push 0x1000400
            mov edx, dword ptr [eax]
            push 0
            push 0
            push ebx
            push eax
            call dword ptr [edx + 0x14]
            mov esi, eax
            cmp esi, 0x887601ae
            jne lbl_5e003231
            test byte ptr [edi + 0x4874], 2
            je lbl_5e003231
            mov edx, dword ptr [edi]
            push edi
            call dword ptr [edx + 0x28]
            mov eax, dword ptr [edi + 0x4270]
            lea edx, [esp + 0x18]
            push edx
            push 0x1000400
            mov ecx, dword ptr [eax]
            push 0
            push 0
            push ebx
            push eax
            call dword ptr [ecx + 0x14]
            mov esi, eax
            mov eax, dword ptr [edi]
            push edi
            call dword ptr [eax + 0x24]
        lbl_5e003231:
            add ebx, 0x10
            dec ebp
            jne lbl_5e0031da
        lbl_5e003237:
            test byte ptr [esp + 0x108], 2
            je FUN_5e003372
            fld dword ptr [esp + 0x110]
            fmul dword ptr [g_5e035a9c]
            mov ecx, 0x18
            xor eax, eax
            lea edi, [esp + 0x1c]
            mov dword ptr [esp + 0x18], 0x64
            rep stosd
            __emit 0xe8 /* call 0x5e02b4cc: MSVC6 cannot encode natively */
            __emit 0x60 /* call 0x5e02b4cc: MSVC6 cannot encode natively */
            __emit 0x82 /* call 0x5e02b4cc: MSVC6 cannot encode natively */
            __emit 0x02 /* call 0x5e02b4cc: MSVC6 cannot encode natively */
            __emit 0x00 /* call 0x5e02b4cc: MSVC6 cannot encode natively */
            and eax, 0xffff
            mov dword ptr [esp + 0x68], eax
            mov eax, dword ptr [esp + 0x100]
            test eax, eax
            jbe FUN_5e003372
            mov ecx, dword ptr [esp + 0xfc]
            mov ebx, dword ptr [esp + 0x104]
            mov edx, eax
            mov ebp, dword ptr [ecx + 4]
            mov dword ptr [esp + 0x10], edx
            mov edi, dword ptr [ebp + 0x42f8]
            lea ecx, [esp + 0x18]
            push ecx
            push 0x1000400
            mov eax, dword ptr [edi]
            push 0
            push 0
            push ebx
            push edi
            call dword ptr [eax + 0x14]
            mov esi, eax
            test esi, esi
            jge FUN_5e003360
            cmp esi, 0x80070057
            jne lbl_5e0032df
            mov edx, dword ptr [edi]
            lea eax, [esp + 0x18]
            push eax
            push 0x3000000
            push 0
            push 0
            push ebx
            push edi
            call dword ptr [edx + 0x14]
            jmp lbl_5e00335e
        lbl_5e0032df:
            cmp esi, 0x887601ae
            jne lbl_5e003360
            mov esi, dword ptr [ebp + 0x42f8]
            push 0
            push esi
            mov ecx, dword ptr [esi]
            call dword ptr [ecx + 0x80]
            mov edx, dword ptr [esi]
            lea eax, [esp + 0x18]
            push eax
            push 0x1000400
            push 0
            push 0
            push ebx
            push esi
            call dword ptr [edx + 0x14]
            cmp eax, 0x80070057
            jne lbl_5e003329
            mov ecx, dword ptr [esi]
            lea edx, [esp + 0x18]
            push edx
            push 0x3000000
            push 0
            push 0
            push ebx
            push esi
            call dword ptr [ecx + 0x14]
        lbl_5e003329:
            mov ecx, 0x1e
            xor eax, eax
            lea edi, [esp + 0x80]
            mov dword ptr [esp + 0x7c], 0x7c
            rep stosd
            __emit 0x8b /* mov eax, dword ptr [ebp + 0x42f8]: MSVC6 cannot encode natively */
            __emit 0x85 /* mov eax, dword ptr [ebp + 0x42f8]: MSVC6 cannot encode natively */
            __emit 0xf8 /* mov eax, dword ptr [ebp + 0x42f8]: MSVC6 cannot encode natively */
            __emit 0x42 /* mov eax, dword ptr [ebp + 0x42f8]: MSVC6 cannot encode natively */
            __emit 0x00 /* mov eax, dword ptr [ebp + 0x42f8]: MSVC6 cannot encode natively */
            __emit 0x00 /* mov eax, dword ptr [ebp + 0x42f8]: MSVC6 cannot encode natively */
            push 0
            lea edx, [esp + 0x80]
            push 0x801
            mov ecx, dword ptr [eax]
            push edx
            push 0
            push eax
            call dword ptr [ecx + 0x64]
        lbl_5e00335e:
            mov esi, eax
        lbl_5e003360:
            mov eax, dword ptr [esp + 0x10]
            add ebx, 0x10
            dec eax
            mov dword ptr [esp + 0x10], eax
            jne FUN_5e00329b
            pop edi
            pop ebp
            mov eax, esi
            pop ebx
            pop esi
            add esp, 0xe8
            ret 0x1c
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
    }
}
