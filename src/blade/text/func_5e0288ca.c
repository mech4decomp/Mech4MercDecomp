/* auto-transcribed gap function 0x5E0288CA (11166 B); review against reference; stepping stone */
extern void __cdecl FUN_5e028c23(void);
extern void __cdecl FUN_5e029ef1(void);
extern void __cdecl FUN_5e02b669(void);
extern void __cdecl FUN_5e02b69c(void);
extern int g_5e035004;
extern int g_5e035008;
extern int g_5e03500c;
extern int g_5e035010;
extern int g_5e035014;
extern int g_5e035084;
extern int g_5e038990;
extern int g_5e77a708;
extern int g_5e77a70c;
extern int g_5e77a710;
extern int g_5e77a714;
extern int g_5e77a718;
extern int g_5e77a71c;
extern int g_5e77a720;
extern int g_5e77a724;
extern int g_5e77a728;
extern int g_5e77a72c;
extern int g_5e77a730;
extern int g_5e77a734;
extern int g_5e77a738;
extern int g_5e77a73c;
extern int g_5e77a740;
extern int g_5e77a744;
extern int g_5e77a788;
extern int g_5e77a78c;
extern int g_5e77a790;
extern int g_5e77a794;
extern int g_5e77a7bc;
extern int g_5e77a7c0;
extern int g_5e77a7c4;
extern int g_5e77a7c8;
extern int g_5e77a7cc;
extern int g_5e77a7d0;
extern int g_5e77a7d4;
extern int g_5e77a7d8;
extern int g_5e77a7dc;
extern int g_5e77a7e0;
extern int g_5e77a7e4;
extern int g_5e77a7e8;
extern int g_5e77a7ec;
extern int g_5e77a818;
extern int g_5e77a824;
extern int g_5e77a828;
extern int g_5e77a82c;
extern int g_5e77a830;
extern int g_5e77a838;
extern int g_5e77a83c;
__declspec(naked) void FUN_5e0288ca(void)
{
    __asm {
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
            mov ecx, dword ptr [g_5e77a82c]
            mov edx, dword ptr [g_5e77a7cc]
            mov ebp, dword ptr [g_5e77a7d0]
            mov esi, dword ptr [g_5e77a824]
            mov ebx, dword ptr [g_5e77a7c4]
            cmp ecx, 8
            __emit 0x74 /* je 0x5e02893c: MSVC6 cannot encode natively */
            __emit 0x49 /* je 0x5e02893c: MSVC6 cannot encode natively */
            mov dword ptr [g_5e77a818], esp
            xor edi, edi
        lbl_5e0288fb:
            mov esp, edx
            mov eax, ebp
            shr esp, 0x10
            shr eax, cl
            and esp, dword ptr [g_5e77a828]
            and eax, dword ptr [g_5e77a830]
            add eax, esp
            mov esp, dword ptr [g_5e77a7d4]
            add edx, esp
            mov esp, dword ptr [g_5e77a7d8]
            mov di, word ptr [esi + eax*2]
            add ebp, esp
            __emit 0x89 /* mov dword ptr [ebx*4 + 0x5e77a748], edi: MSVC6 cannot encode natively */
            __emit 0x3c /* mov dword ptr [ebx*4 + 0x5e77a748], edi: MSVC6 cannot encode natively */
            __emit 0x9d /* mov dword ptr [ebx*4 + 0x5e77a748], edi: MSVC6 cannot encode natively */
            __emit 0x48 /* mov dword ptr [ebx*4 + 0x5e77a748], edi: MSVC6 cannot encode natively */
            __emit 0xa7 /* mov dword ptr [ebx*4 + 0x5e77a748], edi: MSVC6 cannot encode natively */
            __emit 0x77 /* mov dword ptr [ebx*4 + 0x5e77a748], edi: MSVC6 cannot encode natively */
            __emit 0x5e /* mov dword ptr [ebx*4 + 0x5e77a748], edi: MSVC6 cannot encode natively */
            inc ebx
            jne lbl_5e0288fb
            mov esp, dword ptr [g_5e77a818]
            jmp dword ptr [g_5e77a78c]
            xor ecx, ecx
        lbl_5e02893e:
            mov edi, edx
            mov eax, ebp
            shr edi, 0x10
            shr eax, 8
            and edi, 0xff
            and eax, 0xff00
            add eax, edi
            mov edi, dword ptr [g_5e77a7d4]
            add edx, edi
            mov edi, dword ptr [g_5e77a7d8]
            mov cx, word ptr [esi + eax*2]
            add ebp, edi
            __emit 0x89 /* mov dword ptr [ebx*4 + 0x5e77a748], ecx: MSVC6 cannot encode natively */
            __emit 0x0c /* mov dword ptr [ebx*4 + 0x5e77a748], ecx: MSVC6 cannot encode natively */
            __emit 0x9d /* mov dword ptr [ebx*4 + 0x5e77a748], ecx: MSVC6 cannot encode natively */
            __emit 0x48 /* mov dword ptr [ebx*4 + 0x5e77a748], ecx: MSVC6 cannot encode natively */
            __emit 0xa7 /* mov dword ptr [ebx*4 + 0x5e77a748], ecx: MSVC6 cannot encode natively */
            __emit 0x77 /* mov dword ptr [ebx*4 + 0x5e77a748], ecx: MSVC6 cannot encode natively */
            __emit 0x5e /* mov dword ptr [ebx*4 + 0x5e77a748], ecx: MSVC6 cannot encode natively */
            inc ebx
            jne lbl_5e02893e
            jmp dword ptr [g_5e77a78c]
            mov ecx, dword ptr [g_5e77a7c4]
            mov ebx, dword ptr [g_5e77a7e0]
            mov edx, dword ptr [g_5e77a7e8]
            mov esi, dword ptr [g_5e77a7e4]
            mov eax, ebx
            mov edi, dword ptr [g_5e77a7ec]
            cmp ecx, -0x10
            __emit 0x74 /* je 0x5e0289be: MSVC6 cannot encode natively */
            __emit 0x20 /* je 0x5e0289be: MSVC6 cannot encode natively */
        lbl_5e02899e:
            or eax, edx
            add ebx, esi
            shr eax, 5
            add edx, edi
            and eax, 0x1f07c1f
            __emit 0x89 /* mov dword ptr [ecx*4 + 0x5e77a748], eax: MSVC6 cannot encode natively */
            __emit 0x04 /* mov dword ptr [ecx*4 + 0x5e77a748], eax: MSVC6 cannot encode natively */
            __emit 0x8d /* mov dword ptr [ecx*4 + 0x5e77a748], eax: MSVC6 cannot encode natively */
            __emit 0x48 /* mov dword ptr [ecx*4 + 0x5e77a748], eax: MSVC6 cannot encode natively */
            __emit 0xa7 /* mov dword ptr [ecx*4 + 0x5e77a748], eax: MSVC6 cannot encode natively */
            __emit 0x77 /* mov dword ptr [ecx*4 + 0x5e77a748], eax: MSVC6 cannot encode natively */
            __emit 0x5e /* mov dword ptr [ecx*4 + 0x5e77a748], eax: MSVC6 cannot encode natively */
            mov eax, ebx
            inc ecx
            jne lbl_5e02899e
            jmp dword ptr [g_5e77a794]
            add ebx, esi
            or eax, edx
            add edx, edi
            shr eax, 5
            mov ebp, ebx
            and eax, 0x1f07c1f
            or ebp, edx
            mov dword ptr [g_5e77a708], eax
            add ebx, esi
            add edx, edi
            shr ebp, 5
            mov eax, ebx
            and ebp, 0x1f07c1f
            or eax, edx
            mov dword ptr [g_5e77a70c], ebp
            add ebx, esi
            add edx, edi
            shr eax, 5
            mov ebp, ebx
            and eax, 0x1f07c1f
            or ebp, edx
            mov dword ptr [g_5e77a710], eax
            add ebx, esi
            add edx, edi
            shr ebp, 5
            mov eax, ebx
            and ebp, 0x1f07c1f
            or eax, edx
            mov dword ptr [g_5e77a714], ebp
            add ebx, esi
            add edx, edi
            shr eax, 5
            mov ebp, ebx
            and eax, 0x1f07c1f
            or ebp, edx
            mov dword ptr [g_5e77a718], eax
            add ebx, esi
            add edx, edi
            shr ebp, 5
            mov eax, ebx
            and ebp, 0x1f07c1f
            or eax, edx
            mov dword ptr [g_5e77a71c], ebp
            add ebx, esi
            add edx, edi
            shr eax, 5
            mov ebp, ebx
            and eax, 0x1f07c1f
            or ebp, edx
            mov dword ptr [g_5e77a720], eax
            add ebx, esi
            add edx, edi
            shr ebp, 5
            mov eax, ebx
            and ebp, 0x1f07c1f
            or eax, edx
            mov dword ptr [g_5e77a724], ebp
            add ebx, esi
            add edx, edi
            shr eax, 5
            mov ebp, ebx
            and eax, 0x1f07c1f
            or ebp, edx
            mov dword ptr [g_5e77a728], eax
            add ebx, esi
            add edx, edi
            shr ebp, 5
            mov eax, ebx
            and ebp, 0x1f07c1f
            or eax, edx
            mov dword ptr [g_5e77a72c], ebp
            add ebx, esi
            add edx, edi
            shr eax, 5
            mov ebp, ebx
            and eax, 0x1f07c1f
            or ebp, edx
            mov dword ptr [g_5e77a730], eax
            add ebx, esi
            add edx, edi
            shr ebp, 5
            mov eax, ebx
            and ebp, 0x1f07c1f
            or eax, edx
            mov dword ptr [g_5e77a734], ebp
            add ebx, esi
            add edx, edi
            shr eax, 5
            mov ebp, ebx
            and eax, 0x1f07c1f
            or ebp, edx
            mov dword ptr [g_5e77a738], eax
            add ebx, esi
            add edx, edi
            shr ebp, 5
            mov eax, ebx
            and ebp, 0x1f07c1f
            or eax, edx
            mov dword ptr [g_5e77a73c], ebp
            add ebx, esi
            add edx, edi
            shr eax, 5
            mov ebp, ebx
            and eax, 0x1f07c1f
            or ebp, edx
            mov dword ptr [g_5e77a740], eax
            shr ebp, 5
            and ebp, 0x1f07c1f
            mov dword ptr [g_5e77a744], ebp
            jmp dword ptr [g_5e77a794]
            mov edx, dword ptr [g_5e77a788]
            jmp lbl_5e028b2c
            mov edx, dword ptr [g_5e038990]
        lbl_5e028b2c:
            mov ecx, dword ptr [g_5e77a7c4]
            mov esi, dword ptr [g_5e77a7c0]
            cmp ecx, -0x10
            je lbl_5e028b5c
            mov ebx, dword ptr [g_5e77a7c8]
            ror ebx, 0x10
            mov eax, dword ptr [g_5e77a7dc]
            ror eax, 0x10
        lbl_5e028b4e:
            mov word ptr [esi + ecx*2], bx
            add ebx, eax
            adc ebx, 0
            inc ecx
            jne lbl_5e028b4e
            jmp edx
        lbl_5e028b5c:
            mov ebx, dword ptr [g_5e77a7c8]
            mov eax, dword ptr [g_5e77a7dc]
            test esi, 2
            jne FUN_5e028c23
            mov ebp, ebx
            add ebx, eax
            mov ecx, ebx
            add ebx, eax
            shr ebp, 0x10
            and ecx, 0xffff0000
            mov edi, ebx
            add ebx, eax
            or ebp, ecx
            mov ecx, ebx
            mov dword ptr [esi - 0x20], ebp
            add ebx, eax
            shr edi, 0x10
            and ecx, 0xffff0000
            mov ebp, ebx
            add ebx, eax
            or edi, ecx
            mov ecx, ebx
            mov dword ptr [esi - 0x1c], edi
            add ebx, eax
            shr ebp, 0x10
            and ecx, 0xffff0000
            mov edi, ebx
            add ebx, eax
            or ebp, ecx
            mov ecx, ebx
            mov dword ptr [esi - 0x18], ebp
            add ebx, eax
            shr edi, 0x10
            and ecx, 0xffff0000
            mov ebp, ebx
            add ebx, eax
            or edi, ecx
            mov ecx, ebx
            mov dword ptr [esi - 0x14], edi
            add ebx, eax
            shr ebp, 0x10
            and ecx, 0xffff0000
            mov edi, ebx
            add ebx, eax
            or ebp, ecx
            mov ecx, ebx
            mov dword ptr [esi - 0x10], ebp
            add ebx, eax
            shr edi, 0x10
            and ecx, 0xffff0000
            mov ebp, ebx
            add ebx, eax
            or edi, ecx
            mov ecx, ebx
            mov dword ptr [esi - 0xc], edi
            add ebx, eax
            shr ebp, 0x10
            and ecx, 0xffff0000
            mov edi, ebx
            add ebx, eax
            or ebp, ecx
            mov ecx, ebx
            mov dword ptr [esi - 8], ebp
            shr edi, 0x10
            and ecx, 0xffff0000
            or edi, ecx
            mov dword ptr [esi - 4], edi
            jmp edx
            mov ebp, ebx
            add ebx, eax
            shr ebp, 0x10
            mov edi, ebx
            mov word ptr [esi - 0x20], bp
            add ebx, eax
            mov ecx, ebx
            add ebx, eax
            shr edi, 0x10
            and ecx, 0xffff0000
            mov ebp, ebx
            add ebx, eax
            or edi, ecx
            mov ecx, ebx
            mov dword ptr [esi - 0x1e], edi
            add ebx, eax
            shr ebp, 0x10
            and ecx, 0xffff0000
            mov edi, ebx
            add ebx, eax
            or ebp, ecx
            mov ecx, ebx
            mov dword ptr [esi - 0x1a], ebp
            add ebx, eax
            shr edi, 0x10
            and ecx, 0xffff0000
            mov ebp, ebx
            add ebx, eax
            or edi, ecx
            mov ecx, ebx
            mov dword ptr [esi - 0x16], edi
            add ebx, eax
            shr ebp, 0x10
            and ecx, 0xffff0000
            mov edi, ebx
            add ebx, eax
            or ebp, ecx
            mov ecx, ebx
            mov dword ptr [esi - 0x12], ebp
            add ebx, eax
            shr edi, 0x10
            and ecx, 0xffff0000
            mov ebp, ebx
            add ebx, eax
            or edi, ecx
            mov ecx, ebx
            mov dword ptr [esi - 0xe], edi
            add ebx, eax
            shr ebp, 0x10
            and ecx, 0xffff0000
            mov edi, ebx
            add ebx, eax
            or ebp, ecx
            mov ecx, ebx
            mov dword ptr [esi - 0xa], ebp
            add ebx, eax
            shr edi, 0x10
            and ecx, 0xffff0000
            shr ebx, 0x10
            or edi, ecx
            mov dword ptr [esi - 6], edi
            mov word ptr [esi - 2], bx
            jmp edx
            mov ecx, dword ptr [g_5e77a7c4]
            mov esi, 0x1f00000
        lbl_5e028cdc:
            __emit 0x8b /* mov eax, dword ptr [ecx*4 + 0x5e77a748]: MSVC6 cannot encode natively */
            __emit 0x04 /* mov eax, dword ptr [ecx*4 + 0x5e77a748]: MSVC6 cannot encode natively */
            __emit 0x8d /* mov eax, dword ptr [ecx*4 + 0x5e77a748]: MSVC6 cannot encode natively */
            __emit 0x48 /* mov eax, dword ptr [ecx*4 + 0x5e77a748]: MSVC6 cannot encode natively */
            __emit 0xa7 /* mov eax, dword ptr [ecx*4 + 0x5e77a748]: MSVC6 cannot encode natively */
            __emit 0x77 /* mov eax, dword ptr [ecx*4 + 0x5e77a748]: MSVC6 cannot encode natively */
            __emit 0x5e /* mov eax, dword ptr [ecx*4 + 0x5e77a748]: MSVC6 cannot encode natively */
            mov ebx, eax
            shl eax, 0xa
            mov edx, ebx
            shl ebx, 5
            and eax, esi
            and edx, 0x1f
            and ebx, 0x7c00
            or eax, edx
            or eax, ebx
            __emit 0x89 /* mov dword ptr [ecx*4 + 0x5e77a748], eax: MSVC6 cannot encode natively */
            __emit 0x04 /* mov dword ptr [ecx*4 + 0x5e77a748], eax: MSVC6 cannot encode natively */
            __emit 0x8d /* mov dword ptr [ecx*4 + 0x5e77a748], eax: MSVC6 cannot encode natively */
            __emit 0x48 /* mov dword ptr [ecx*4 + 0x5e77a748], eax: MSVC6 cannot encode natively */
            __emit 0xa7 /* mov dword ptr [ecx*4 + 0x5e77a748], eax: MSVC6 cannot encode natively */
            __emit 0x77 /* mov dword ptr [ecx*4 + 0x5e77a748], eax: MSVC6 cannot encode natively */
            __emit 0x5e /* mov dword ptr [ecx*4 + 0x5e77a748], eax: MSVC6 cannot encode natively */
            inc ecx
            jne lbl_5e028cdc
            jmp dword ptr [g_5e77a790]
            mov ecx, dword ptr [g_5e77a7c4]
            mov esi, 0x1f00000
            cmp ecx, -0x10
            __emit 0x74 /* je 0x5e028d4c: MSVC6 cannot encode natively */
            __emit 0x30 /* je 0x5e028d4c: MSVC6 cannot encode natively */
        lbl_5e028d1c:
            __emit 0x8b /* mov eax, dword ptr [ecx*4 + 0x5e77a748]: MSVC6 cannot encode natively */
            __emit 0x04 /* mov eax, dword ptr [ecx*4 + 0x5e77a748]: MSVC6 cannot encode natively */
            __emit 0x8d /* mov eax, dword ptr [ecx*4 + 0x5e77a748]: MSVC6 cannot encode natively */
            __emit 0x48 /* mov eax, dword ptr [ecx*4 + 0x5e77a748]: MSVC6 cannot encode natively */
            __emit 0xa7 /* mov eax, dword ptr [ecx*4 + 0x5e77a748]: MSVC6 cannot encode natively */
            __emit 0x77 /* mov eax, dword ptr [ecx*4 + 0x5e77a748]: MSVC6 cannot encode natively */
            __emit 0x5e /* mov eax, dword ptr [ecx*4 + 0x5e77a748]: MSVC6 cannot encode natively */
            mov ebx, eax
            shl eax, 9
            mov edx, ebx
            shl ebx, 4
            and eax, esi
            and edx, 0x1f
            and ebx, 0x7c00
            or eax, edx
            or eax, ebx
            __emit 0x89 /* mov dword ptr [ecx*4 + 0x5e77a748], eax: MSVC6 cannot encode natively */
            __emit 0x04 /* mov dword ptr [ecx*4 + 0x5e77a748], eax: MSVC6 cannot encode natively */
            __emit 0x8d /* mov dword ptr [ecx*4 + 0x5e77a748], eax: MSVC6 cannot encode natively */
            __emit 0x48 /* mov dword ptr [ecx*4 + 0x5e77a748], eax: MSVC6 cannot encode natively */
            __emit 0xa7 /* mov dword ptr [ecx*4 + 0x5e77a748], eax: MSVC6 cannot encode natively */
            __emit 0x77 /* mov dword ptr [ecx*4 + 0x5e77a748], eax: MSVC6 cannot encode natively */
            __emit 0x5e /* mov dword ptr [ecx*4 + 0x5e77a748], eax: MSVC6 cannot encode natively */
            inc ecx
            jne lbl_5e028d1c
            jmp dword ptr [g_5e77a790]
            mov eax, dword ptr [g_5e77a708]
            mov edi, dword ptr [g_5e77a70c]
            mov ebx, eax
            mov ebp, edi
            shl eax, 9
            mov edx, ebx
            shl ebx, 4
            and eax, esi
            and edx, 0x1f
            and ebx, 0x7c00
            shl edi, 9
            or eax, edx
            or eax, ebx
            mov edx, ebp
            mov dword ptr [g_5e77a708], eax
            mov eax, dword ptr [g_5e77a710]
            shl ebp, 4
            mov ebx, eax
            and edi, esi
            and edx, 0x1f
            and ebp, 0x7c00
            or edi, edx
            shl eax, 9
            or edi, ebp
            mov edx, ebx
            mov dword ptr [g_5e77a70c], edi
            shl ebx, 4
            mov edi, dword ptr [g_5e77a714]
            and eax, esi
            mov ebp, edi
            and edx, 0x1f
            and ebx, 0x7c00
            shl edi, 9
            or eax, edx
            mov edx, ebp
            or eax, ebx
            mov dword ptr [g_5e77a710], eax
            mov eax, dword ptr [g_5e77a718]
            shl ebp, 4
            mov ebx, eax
            and edi, esi
            and edx, 0x1f
            and ebp, 0x7c00
            or edi, edx
            shl eax, 9
            or edi, ebp
            mov edx, ebx
            mov dword ptr [g_5e77a714], edi
            shl ebx, 4
            mov edi, dword ptr [g_5e77a71c]
            and eax, esi
            mov ebp, edi
            and edx, 0x1f
            and ebx, 0x7c00
            shl edi, 9
            or eax, edx
            mov edx, ebp
            or eax, ebx
            mov dword ptr [g_5e77a718], eax
            mov eax, dword ptr [g_5e77a720]
            shl ebp, 4
            mov ebx, eax
            and edi, esi
            and edx, 0x1f
            and ebp, 0x7c00
            or edi, edx
            shl eax, 9
            or edi, ebp
            mov edx, ebx
            mov dword ptr [g_5e77a71c], edi
            shl ebx, 4
            mov edi, dword ptr [g_5e77a724]
            and eax, esi
            mov ebp, edi
            and edx, 0x1f
            and ebx, 0x7c00
            shl edi, 9
            or eax, edx
            mov edx, ebp
            or eax, ebx
            mov dword ptr [g_5e77a720], eax
            mov eax, dword ptr [g_5e77a728]
            shl ebp, 4
            mov ebx, eax
            and edi, esi
            and edx, 0x1f
            and ebp, 0x7c00
            or edi, edx
            shl eax, 9
            or edi, ebp
            mov edx, ebx
            mov dword ptr [g_5e77a724], edi
            shl ebx, 4
            mov edi, dword ptr [g_5e77a72c]
            and eax, esi
            mov ebp, edi
            and edx, 0x1f
            and ebx, 0x7c00
            shl edi, 9
            or eax, edx
            mov edx, ebp
            or eax, ebx
            mov dword ptr [g_5e77a728], eax
            mov eax, dword ptr [g_5e77a730]
            shl ebp, 4
            mov ebx, eax
            and edi, esi
            and edx, 0x1f
            and ebp, 0x7c00
            or edi, edx
            shl eax, 9
            or edi, ebp
            mov edx, ebx
            mov dword ptr [g_5e77a72c], edi
            shl ebx, 4
            mov edi, dword ptr [g_5e77a734]
            and eax, esi
            mov ebp, edi
            and edx, 0x1f
            and ebx, 0x7c00
            shl edi, 9
            or eax, edx
            mov edx, ebp
            or eax, ebx
            mov dword ptr [g_5e77a730], eax
            mov eax, dword ptr [g_5e77a738]
            shl ebp, 4
            mov ebx, eax
            and edi, esi
            and edx, 0x1f
            and ebp, 0x7c00
            or edi, edx
            shl eax, 9
            or edi, ebp
            mov edx, ebx
            mov dword ptr [g_5e77a734], edi
            shl ebx, 4
            mov edi, dword ptr [g_5e77a73c]
            and eax, esi
            mov ebp, edi
            and edx, 0x1f
            and ebx, 0x7c00
            shl edi, 9
            or eax, edx
            mov edx, ebp
            or eax, ebx
            mov dword ptr [g_5e77a738], eax
            mov eax, dword ptr [g_5e77a740]
            shl ebp, 4
            mov ebx, eax
            and edi, esi
            and edx, 0x1f
            and ebp, 0x7c00
            or edi, edx
            shl eax, 9
            or edi, ebp
            mov edx, ebx
            mov dword ptr [g_5e77a73c], edi
            shl ebx, 4
            mov edi, dword ptr [g_5e77a744]
            and eax, esi
            mov ebp, edi
            and edx, 0x1f
            and ebx, 0x7c00
            shl edi, 9
            or eax, edx
            mov edx, ebp
            or eax, ebx
            mov dword ptr [g_5e77a740], eax
            shl ebp, 4
            and edi, esi
            and edx, 0x1f
            and ebp, 0x7c00
            or edi, edx
            or edi, ebp
            mov dword ptr [g_5e77a744], edi
            jmp dword ptr [g_5e77a790]
            mov dword ptr [g_5e77a818], esp
            mov ecx, dword ptr [g_5e77a82c]
            mov esp, dword ptr [g_5e77a7cc]
            mov edx, dword ptr [g_5e77a7bc]
            shl esp, cl
            mov ebx, dword ptr [g_5e77a7d4]
            shl ebx, cl
            mov edi, esp
            shl ecx, 4
            mov eax, dword ptr [g_5e77a7c4]
            add eax, ecx
            mov ecx, ebx
            mov ebp, dword ptr [g_5e77a7d0]
            mov esi, dword ptr [g_5e77a824]
            mov ebx, dword ptr [g_5e77a7d8]
            __emit 0xff /* jmp dword ptr [eax*4 + 0x5e0389c0]: MSVC6 cannot encode natively */
            __emit 0x24 /* jmp dword ptr [eax*4 + 0x5e0389c0]: MSVC6 cannot encode natively */
            __emit 0x85 /* jmp dword ptr [eax*4 + 0x5e0389c0]: MSVC6 cannot encode natively */
            __emit 0xc0 /* jmp dword ptr [eax*4 + 0x5e0389c0]: MSVC6 cannot encode natively */
            __emit 0x89 /* jmp dword ptr [eax*4 + 0x5e0389c0]: MSVC6 cannot encode natively */
            __emit 0x03 /* jmp dword ptr [eax*4 + 0x5e0389c0]: MSVC6 cannot encode natively */
            __emit 0x5e /* jmp dword ptr [eax*4 + 0x5e0389c0]: MSVC6 cannot encode natively */
            mov eax, ebp
            shr edi, 0x18
            and eax, 0xff0000
            shr eax, 8
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x20], ax
            mov eax, ebp
            shr edi, 0x18
            and eax, 0xff0000
            shr eax, 8
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x1e], ax
            mov eax, ebp
            shr edi, 0x18
            and eax, 0xff0000
            shr eax, 8
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x1c], ax
            mov eax, ebp
            shr edi, 0x18
            and eax, 0xff0000
            shr eax, 8
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x1a], ax
            mov eax, ebp
            shr edi, 0x18
            and eax, 0xff0000
            shr eax, 8
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x18], ax
            mov eax, ebp
            shr edi, 0x18
            and eax, 0xff0000
            shr eax, 8
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x16], ax
            mov eax, ebp
            shr edi, 0x18
            and eax, 0xff0000
            shr eax, 8
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x14], ax
            mov eax, ebp
            shr edi, 0x18
            and eax, 0xff0000
            shr eax, 8
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x12], ax
            mov eax, ebp
            shr edi, 0x18
            and eax, 0xff0000
            shr eax, 8
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x10], ax
            mov eax, ebp
            shr edi, 0x18
            and eax, 0xff0000
            shr eax, 8
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0xe], ax
            mov eax, ebp
            shr edi, 0x18
            and eax, 0xff0000
            shr eax, 8
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0xc], ax
            mov eax, ebp
            shr edi, 0x18
            and eax, 0xff0000
            shr eax, 8
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0xa], ax
            mov eax, ebp
            shr edi, 0x18
            and eax, 0xff0000
            shr eax, 8
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 8], ax
            mov eax, ebp
            shr edi, 0x18
            and eax, 0xff0000
            shr eax, 8
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 6], ax
            mov eax, ebp
            shr edi, 0x18
            and eax, 0xff0000
            shr eax, 8
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 4], ax
            mov eax, ebp
            shr edi, 0x18
            and eax, 0xff0000
            shr eax, 8
            add eax, edi
            mov ax, word ptr [esi + eax*2]
            mov word ptr [edx - 2], ax
            mov esp, dword ptr [g_5e77a818]
            ret
            mov eax, ebp
            shr edi, 0x19
            and eax, 0x7f0000
            shr eax, 9
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x20], ax
            mov eax, ebp
            shr edi, 0x19
            and eax, 0x7f0000
            shr eax, 9
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x1e], ax
            mov eax, ebp
            shr edi, 0x19
            and eax, 0x7f0000
            shr eax, 9
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x1c], ax
            mov eax, ebp
            shr edi, 0x19
            and eax, 0x7f0000
            shr eax, 9
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x1a], ax
            mov eax, ebp
            shr edi, 0x19
            and eax, 0x7f0000
            shr eax, 9
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x18], ax
            mov eax, ebp
            shr edi, 0x19
            and eax, 0x7f0000
            shr eax, 9
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x16], ax
            mov eax, ebp
            shr edi, 0x19
            and eax, 0x7f0000
            shr eax, 9
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x14], ax
            mov eax, ebp
            shr edi, 0x19
            and eax, 0x7f0000
            shr eax, 9
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x12], ax
            mov eax, ebp
            shr edi, 0x19
            and eax, 0x7f0000
            shr eax, 9
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x10], ax
            mov eax, ebp
            shr edi, 0x19
            and eax, 0x7f0000
            shr eax, 9
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0xe], ax
            mov eax, ebp
            shr edi, 0x19
            and eax, 0x7f0000
            shr eax, 9
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0xc], ax
            mov eax, ebp
            shr edi, 0x19
            and eax, 0x7f0000
            shr eax, 9
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0xa], ax
            mov eax, ebp
            shr edi, 0x19
            and eax, 0x7f0000
            shr eax, 9
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 8], ax
            mov eax, ebp
            shr edi, 0x19
            and eax, 0x7f0000
            shr eax, 9
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 6], ax
            mov eax, ebp
            shr edi, 0x19
            and eax, 0x7f0000
            shr eax, 9
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 4], ax
            mov eax, ebp
            shr edi, 0x19
            and eax, 0x7f0000
            shr eax, 9
            add eax, edi
            mov ax, word ptr [esi + eax*2]
            mov word ptr [edx - 2], ax
            mov esp, dword ptr [g_5e77a818]
            ret
            mov eax, ebp
            shr edi, 0x1a
            and eax, 0x3f0000
            shr eax, 0xa
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x20], ax
            mov eax, ebp
            shr edi, 0x1a
            and eax, 0x3f0000
            shr eax, 0xa
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x1e], ax
            mov eax, ebp
            shr edi, 0x1a
            and eax, 0x3f0000
            shr eax, 0xa
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x1c], ax
            mov eax, ebp
            shr edi, 0x1a
            and eax, 0x3f0000
            shr eax, 0xa
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x1a], ax
            mov eax, ebp
            shr edi, 0x1a
            and eax, 0x3f0000
            shr eax, 0xa
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x18], ax
            mov eax, ebp
            shr edi, 0x1a
            and eax, 0x3f0000
            shr eax, 0xa
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x16], ax
            mov eax, ebp
            shr edi, 0x1a
            and eax, 0x3f0000
            shr eax, 0xa
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x14], ax
            mov eax, ebp
            shr edi, 0x1a
            and eax, 0x3f0000
            shr eax, 0xa
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x12], ax
            mov eax, ebp
            shr edi, 0x1a
            and eax, 0x3f0000
            shr eax, 0xa
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x10], ax
            mov eax, ebp
            shr edi, 0x1a
            and eax, 0x3f0000
            shr eax, 0xa
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0xe], ax
            mov eax, ebp
            shr edi, 0x1a
            and eax, 0x3f0000
            shr eax, 0xa
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0xc], ax
            mov eax, ebp
            shr edi, 0x1a
            and eax, 0x3f0000
            shr eax, 0xa
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0xa], ax
            mov eax, ebp
            shr edi, 0x1a
            and eax, 0x3f0000
            shr eax, 0xa
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 8], ax
            mov eax, ebp
            shr edi, 0x1a
            and eax, 0x3f0000
            shr eax, 0xa
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 6], ax
            mov eax, ebp
            shr edi, 0x1a
            and eax, 0x3f0000
            shr eax, 0xa
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 4], ax
            mov eax, ebp
            shr edi, 0x1a
            and eax, 0x3f0000
            shr eax, 0xa
            add eax, edi
            mov ax, word ptr [esi + eax*2]
            mov word ptr [edx - 2], ax
            mov esp, dword ptr [g_5e77a818]
            ret
            mov eax, ebp
            shr edi, 0x1b
            and eax, 0x1f0000
            shr eax, 0xb
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x20], ax
            mov eax, ebp
            shr edi, 0x1b
            and eax, 0x1f0000
            shr eax, 0xb
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x1e], ax
            mov eax, ebp
            shr edi, 0x1b
            and eax, 0x1f0000
            shr eax, 0xb
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x1c], ax
            mov eax, ebp
            shr edi, 0x1b
            and eax, 0x1f0000
            shr eax, 0xb
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x1a], ax
            mov eax, ebp
            shr edi, 0x1b
            and eax, 0x1f0000
            shr eax, 0xb
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x18], ax
            mov eax, ebp
            shr edi, 0x1b
            and eax, 0x1f0000
            shr eax, 0xb
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x16], ax
            mov eax, ebp
            shr edi, 0x1b
            and eax, 0x1f0000
            shr eax, 0xb
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x14], ax
            mov eax, ebp
            shr edi, 0x1b
            and eax, 0x1f0000
            shr eax, 0xb
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x12], ax
            mov eax, ebp
            shr edi, 0x1b
            and eax, 0x1f0000
            shr eax, 0xb
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x10], ax
            mov eax, ebp
            shr edi, 0x1b
            and eax, 0x1f0000
            shr eax, 0xb
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0xe], ax
            mov eax, ebp
            shr edi, 0x1b
            and eax, 0x1f0000
            shr eax, 0xb
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0xc], ax
            mov eax, ebp
            shr edi, 0x1b
            and eax, 0x1f0000
            shr eax, 0xb
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0xa], ax
            mov eax, ebp
            shr edi, 0x1b
            and eax, 0x1f0000
            shr eax, 0xb
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 8], ax
            mov eax, ebp
            shr edi, 0x1b
            and eax, 0x1f0000
            shr eax, 0xb
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 6], ax
            mov eax, ebp
            shr edi, 0x1b
            and eax, 0x1f0000
            shr eax, 0xb
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 4], ax
            mov eax, ebp
            shr edi, 0x1b
            and eax, 0x1f0000
            shr eax, 0xb
            add eax, edi
            mov ax, word ptr [esi + eax*2]
            mov word ptr [edx - 2], ax
            mov esp, dword ptr [g_5e77a818]
            ret
            mov eax, ebp
            shr edi, 0x1c
            and eax, 0xf0000
            shr eax, 0xc
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x20], ax
            mov eax, ebp
            shr edi, 0x1c
            and eax, 0xf0000
            shr eax, 0xc
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x1e], ax
            mov eax, ebp
            shr edi, 0x1c
            and eax, 0xf0000
            shr eax, 0xc
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x1c], ax
            mov eax, ebp
            shr edi, 0x1c
            and eax, 0xf0000
            shr eax, 0xc
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x1a], ax
            mov eax, ebp
            shr edi, 0x1c
            and eax, 0xf0000
            shr eax, 0xc
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x18], ax
            mov eax, ebp
            shr edi, 0x1c
            and eax, 0xf0000
            shr eax, 0xc
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x16], ax
            mov eax, ebp
            shr edi, 0x1c
            and eax, 0xf0000
            shr eax, 0xc
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x14], ax
            mov eax, ebp
            shr edi, 0x1c
            and eax, 0xf0000
            shr eax, 0xc
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x12], ax
            mov eax, ebp
            shr edi, 0x1c
            and eax, 0xf0000
            shr eax, 0xc
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x10], ax
            mov eax, ebp
            shr edi, 0x1c
            and eax, 0xf0000
            shr eax, 0xc
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0xe], ax
            mov eax, ebp
            shr edi, 0x1c
            and eax, 0xf0000
            shr eax, 0xc
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0xc], ax
            mov eax, ebp
            shr edi, 0x1c
            and eax, 0xf0000
            shr eax, 0xc
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0xa], ax
            mov eax, ebp
            shr edi, 0x1c
            and eax, 0xf0000
            shr eax, 0xc
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 8], ax
            mov eax, ebp
            shr edi, 0x1c
            and eax, 0xf0000
            shr eax, 0xc
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 6], ax
            mov eax, ebp
            shr edi, 0x1c
            and eax, 0xf0000
            shr eax, 0xc
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 4], ax
            mov eax, ebp
            shr edi, 0x1c
            and eax, 0xf0000
            shr eax, 0xc
            add eax, edi
            mov ax, word ptr [esi + eax*2]
            mov word ptr [edx - 2], ax
            mov esp, dword ptr [g_5e77a818]
            ret
            mov eax, ebp
            shr edi, 0x1d
            and eax, 0x70000
            shr eax, 0xd
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x20], ax
            mov eax, ebp
            shr edi, 0x1d
            and eax, 0x70000
            shr eax, 0xd
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x1e], ax
            mov eax, ebp
            shr edi, 0x1d
            and eax, 0x70000
            shr eax, 0xd
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x1c], ax
            mov eax, ebp
            shr edi, 0x1d
            and eax, 0x70000
            shr eax, 0xd
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x1a], ax
            mov eax, ebp
            shr edi, 0x1d
            and eax, 0x70000
            shr eax, 0xd
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x18], ax
            mov eax, ebp
            shr edi, 0x1d
            and eax, 0x70000
            shr eax, 0xd
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x16], ax
            mov eax, ebp
            shr edi, 0x1d
            and eax, 0x70000
            shr eax, 0xd
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x14], ax
            mov eax, ebp
            shr edi, 0x1d
            and eax, 0x70000
            shr eax, 0xd
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x12], ax
            mov eax, ebp
            shr edi, 0x1d
            and eax, 0x70000
            shr eax, 0xd
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x10], ax
            mov eax, ebp
            shr edi, 0x1d
            and eax, 0x70000
            shr eax, 0xd
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0xe], ax
            mov eax, ebp
            shr edi, 0x1d
            and eax, 0x70000
            shr eax, 0xd
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0xc], ax
            mov eax, ebp
            shr edi, 0x1d
            and eax, 0x70000
            shr eax, 0xd
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0xa], ax
            mov eax, ebp
            shr edi, 0x1d
            and eax, 0x70000
            shr eax, 0xd
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 8], ax
            mov eax, ebp
            shr edi, 0x1d
            and eax, 0x70000
            shr eax, 0xd
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 6], ax
            mov eax, ebp
            shr edi, 0x1d
            and eax, 0x70000
            shr eax, 0xd
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 4], ax
            mov eax, ebp
            shr edi, 0x1d
            and eax, 0x70000
            shr eax, 0xd
            add eax, edi
            mov ax, word ptr [esi + eax*2]
            mov word ptr [edx - 2], ax
            mov esp, dword ptr [g_5e77a818]
            ret
            mov eax, ebp
            shr edi, 0x1e
            and eax, 0x30000
            shr eax, 0xe
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x20], ax
            mov eax, ebp
            shr edi, 0x1e
            and eax, 0x30000
            shr eax, 0xe
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x1e], ax
            mov eax, ebp
            shr edi, 0x1e
            and eax, 0x30000
            shr eax, 0xe
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x1c], ax
            mov eax, ebp
            shr edi, 0x1e
            and eax, 0x30000
            shr eax, 0xe
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x1a], ax
            mov eax, ebp
            shr edi, 0x1e
            and eax, 0x30000
            shr eax, 0xe
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x18], ax
            mov eax, ebp
            shr edi, 0x1e
            and eax, 0x30000
            shr eax, 0xe
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x16], ax
            mov eax, ebp
            shr edi, 0x1e
            and eax, 0x30000
            shr eax, 0xe
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x14], ax
            mov eax, ebp
            shr edi, 0x1e
            and eax, 0x30000
            shr eax, 0xe
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x12], ax
            mov eax, ebp
            shr edi, 0x1e
            and eax, 0x30000
            shr eax, 0xe
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x10], ax
            mov eax, ebp
            shr edi, 0x1e
            and eax, 0x30000
            shr eax, 0xe
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0xe], ax
            mov eax, ebp
            shr edi, 0x1e
            and eax, 0x30000
            shr eax, 0xe
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0xc], ax
            mov eax, ebp
            shr edi, 0x1e
            and eax, 0x30000
            shr eax, 0xe
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0xa], ax
            mov eax, ebp
            shr edi, 0x1e
            and eax, 0x30000
            shr eax, 0xe
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 8], ax
            mov eax, ebp
            shr edi, 0x1e
            and eax, 0x30000
            shr eax, 0xe
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 6], ax
            mov eax, ebp
            shr edi, 0x1e
            and eax, 0x30000
            shr eax, 0xe
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 4], ax
            mov eax, ebp
            shr edi, 0x1e
            and eax, 0x30000
            shr eax, 0xe
            add eax, edi
            mov ax, word ptr [esi + eax*2]
            mov word ptr [edx - 2], ax
            mov esp, dword ptr [g_5e77a818]
            ret
            mov eax, ebp
            shr edi, 0x1f
            and eax, 0x10000
            shr eax, 0xf
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x20], ax
            mov eax, ebp
            shr edi, 0x1f
            and eax, 0x10000
            shr eax, 0xf
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x1e], ax
            mov eax, ebp
            shr edi, 0x1f
            and eax, 0x10000
            shr eax, 0xf
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x1c], ax
            mov eax, ebp
            shr edi, 0x1f
            and eax, 0x10000
            shr eax, 0xf
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x1a], ax
            mov eax, ebp
            shr edi, 0x1f
            and eax, 0x10000
            shr eax, 0xf
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x18], ax
            mov eax, ebp
            shr edi, 0x1f
            and eax, 0x10000
            shr eax, 0xf
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x16], ax
            mov eax, ebp
            shr edi, 0x1f
            and eax, 0x10000
            shr eax, 0xf
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x14], ax
            mov eax, ebp
            shr edi, 0x1f
            and eax, 0x10000
            shr eax, 0xf
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x12], ax
            mov eax, ebp
            shr edi, 0x1f
            and eax, 0x10000
            shr eax, 0xf
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0x10], ax
            mov eax, ebp
            shr edi, 0x1f
            and eax, 0x10000
            shr eax, 0xf
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0xe], ax
            mov eax, ebp
            shr edi, 0x1f
            and eax, 0x10000
            shr eax, 0xf
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0xc], ax
            mov eax, ebp
            shr edi, 0x1f
            and eax, 0x10000
            shr eax, 0xf
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 0xa], ax
            mov eax, ebp
            shr edi, 0x1f
            and eax, 0x10000
            shr eax, 0xf
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 8], ax
            mov eax, ebp
            shr edi, 0x1f
            and eax, 0x10000
            shr eax, 0xf
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 6], ax
            mov eax, ebp
            shr edi, 0x1f
            and eax, 0x10000
            shr eax, 0xf
            add esp, ecx
            add eax, edi
            add ebp, ebx
            mov ax, word ptr [esi + eax*2]
            mov edi, esp
            mov word ptr [edx - 4], ax
            mov eax, ebp
            shr edi, 0x1f
            and eax, 0x10000
            shr eax, 0xf
            add eax, edi
            mov ax, word ptr [esi + eax*2]
            mov word ptr [edx - 2], ax
            mov esp, dword ptr [g_5e77a818]
            ret
            mov ax, word ptr [esi]
            mov word ptr [edx - 0x20], ax
            mov ax, word ptr [esi]
            mov word ptr [edx - 0x1e], ax
            mov ax, word ptr [esi]
            mov word ptr [edx - 0x1c], ax
            mov ax, word ptr [esi]
            mov word ptr [edx - 0x1a], ax
            mov ax, word ptr [esi]
            mov word ptr [edx - 0x18], ax
            mov ax, word ptr [esi]
            mov word ptr [edx - 0x16], ax
            mov ax, word ptr [esi]
            mov word ptr [edx - 0x14], ax
            mov ax, word ptr [esi]
            mov word ptr [edx - 0x12], ax
            mov ax, word ptr [esi]
            mov word ptr [edx - 0x10], ax
            mov ax, word ptr [esi]
            mov word ptr [edx - 0xe], ax
            mov ax, word ptr [esi]
            mov word ptr [edx - 0xc], ax
            mov ax, word ptr [esi]
            mov word ptr [edx - 0xa], ax
            mov ax, word ptr [esi]
            mov word ptr [edx - 8], ax
            mov ax, word ptr [esi]
            mov word ptr [edx - 6], ax
            mov ax, word ptr [esi]
            mov word ptr [edx - 4], ax
            mov ax, word ptr [esi]
            mov word ptr [edx - 2], ax
            mov esp, dword ptr [g_5e77a818]
            ret
            mov dword ptr [g_5e77a818], esp
            mov ecx, 2
            mov edx, dword ptr [g_5e77a7bc]
            mov esi, dword ptr [g_5e77a824]
            mov dword ptr [g_5e77a83c], ecx
            mov ecx, dword ptr [g_5e77a82c]
            mov esp, dword ptr [g_5e77a7cc]
            shl esp, cl
            mov ebx, dword ptr [g_5e77a7d4]
            shl ebx, cl
            mov edi, esp
            shl ecx, 4
            mov eax, dword ptr [g_5e77a7c4]
            add eax, ecx
            mov ecx, ebx
            mov ebp, dword ptr [g_5e77a7d0]
            xor ebx, ebx
            __emit 0xff /* jmp dword ptr [eax*4 + 0x5e038c00]: MSVC6 cannot encode natively */
            __emit 0x24 /* jmp dword ptr [eax*4 + 0x5e038c00]: MSVC6 cannot encode natively */
            __emit 0x85 /* jmp dword ptr [eax*4 + 0x5e038c00]: MSVC6 cannot encode natively */
            __emit 0x00 /* jmp dword ptr [eax*4 + 0x5e038c00]: MSVC6 cannot encode natively */
            __emit 0x8c /* jmp dword ptr [eax*4 + 0x5e038c00]: MSVC6 cannot encode natively */
            __emit 0x03 /* jmp dword ptr [eax*4 + 0x5e038c00]: MSVC6 cannot encode natively */
            __emit 0x5e /* jmp dword ptr [eax*4 + 0x5e038c00]: MSVC6 cannot encode natively */
            mov eax, ebp
            shr edi, 0x18
            and eax, 0xff0000
            shr eax, 8
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x40], eax
            mov eax, ebp
            shr edi, 0x18
            and eax, 0xff0000
            shr eax, 8
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x3c], eax
            mov eax, ebp
            shr edi, 0x18
            and eax, 0xff0000
            shr eax, 8
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x38], eax
            mov eax, ebp
            shr edi, 0x18
            and eax, 0xff0000
            shr eax, 8
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x34], eax
            mov eax, ebp
            shr edi, 0x18
            and eax, 0xff0000
            shr eax, 8
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x30], eax
            mov eax, ebp
            shr edi, 0x18
            and eax, 0xff0000
            shr eax, 8
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x2c], eax
            mov eax, ebp
            shr edi, 0x18
            and eax, 0xff0000
            shr eax, 8
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x28], eax
            mov eax, ebp
            shr edi, 0x18
            and eax, 0xff0000
            shr eax, 8
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x24], eax
            mov eax, ebp
            shr edi, 0x18
            and eax, 0xff0000
            shr eax, 8
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x20], eax
            mov eax, ebp
            shr edi, 0x18
            and eax, 0xff0000
            shr eax, 8
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x1c], eax
            mov eax, ebp
            shr edi, 0x18
            and eax, 0xff0000
            shr eax, 8
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x18], eax
            mov eax, ebp
            shr edi, 0x18
            and eax, 0xff0000
            shr eax, 8
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x14], eax
            mov eax, ebp
            shr edi, 0x18
            and eax, 0xff0000
            shr eax, 8
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x10], eax
            mov eax, ebp
            shr edi, 0x18
            and eax, 0xff0000
            shr eax, 8
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0xc], eax
            mov eax, ebp
            shr edi, 0x18
            and eax, 0xff0000
            shr eax, 8
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 8], eax
            mov eax, ebp
            shr edi, 0x18
            and eax, 0xff0000
            shr eax, 8
            add eax, edi
            mov bx, word ptr [esi + eax*2]
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 4], eax
            mov ebx, dword ptr [g_5e77a838]
            mov ecx, dword ptr [g_5e77a83c]
            add edx, ebx
            dec ecx
            jne FUN_5e029ef1
            mov esp, dword ptr [g_5e77a818]
            ret
            mov eax, ebp
            shr edi, 0x19
            and eax, 0x7f0000
            shr eax, 9
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x40], eax
            mov eax, ebp
            shr edi, 0x19
            and eax, 0x7f0000
            shr eax, 9
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x3c], eax
            mov eax, ebp
            shr edi, 0x19
            and eax, 0x7f0000
            shr eax, 9
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x38], eax
            mov eax, ebp
            shr edi, 0x19
            and eax, 0x7f0000
            shr eax, 9
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x34], eax
            mov eax, ebp
            shr edi, 0x19
            and eax, 0x7f0000
            shr eax, 9
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x30], eax
            mov eax, ebp
            shr edi, 0x19
            and eax, 0x7f0000
            shr eax, 9
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x2c], eax
            mov eax, ebp
            shr edi, 0x19
            and eax, 0x7f0000
            shr eax, 9
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x28], eax
            mov eax, ebp
            shr edi, 0x19
            and eax, 0x7f0000
            shr eax, 9
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x24], eax
            mov eax, ebp
            shr edi, 0x19
            and eax, 0x7f0000
            shr eax, 9
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x20], eax
            mov eax, ebp
            shr edi, 0x19
            and eax, 0x7f0000
            shr eax, 9
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x1c], eax
            mov eax, ebp
            shr edi, 0x19
            and eax, 0x7f0000
            shr eax, 9
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x18], eax
            mov eax, ebp
            shr edi, 0x19
            and eax, 0x7f0000
            shr eax, 9
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x14], eax
            mov eax, ebp
            shr edi, 0x19
            and eax, 0x7f0000
            shr eax, 9
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x10], eax
            mov eax, ebp
            shr edi, 0x19
            and eax, 0x7f0000
            shr eax, 9
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0xc], eax
            mov eax, ebp
            shr edi, 0x19
            and eax, 0x7f0000
            shr eax, 9
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 8], eax
            mov eax, ebp
            shr edi, 0x19
            and eax, 0x7f0000
            shr eax, 9
            add eax, edi
            mov bx, word ptr [esi + eax*2]
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 4], eax
            mov ebx, dword ptr [g_5e77a838]
            mov ecx, dword ptr [g_5e77a83c]
            add edx, ebx
            dec ecx
            jne FUN_5e029ef1
            mov esp, dword ptr [g_5e77a818]
            ret
            mov eax, ebp
            shr edi, 0x1a
            and eax, 0x3f0000
            shr eax, 0xa
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x40], eax
            mov eax, ebp
            shr edi, 0x1a
            and eax, 0x3f0000
            shr eax, 0xa
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x3c], eax
            mov eax, ebp
            shr edi, 0x1a
            and eax, 0x3f0000
            shr eax, 0xa
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x38], eax
            mov eax, ebp
            shr edi, 0x1a
            and eax, 0x3f0000
            shr eax, 0xa
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x34], eax
            mov eax, ebp
            shr edi, 0x1a
            and eax, 0x3f0000
            shr eax, 0xa
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x30], eax
            mov eax, ebp
            shr edi, 0x1a
            and eax, 0x3f0000
            shr eax, 0xa
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x2c], eax
            mov eax, ebp
            shr edi, 0x1a
            and eax, 0x3f0000
            shr eax, 0xa
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x28], eax
            mov eax, ebp
            shr edi, 0x1a
            and eax, 0x3f0000
            shr eax, 0xa
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x24], eax
            mov eax, ebp
            shr edi, 0x1a
            and eax, 0x3f0000
            shr eax, 0xa
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x20], eax
            mov eax, ebp
            shr edi, 0x1a
            and eax, 0x3f0000
            shr eax, 0xa
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x1c], eax
            mov eax, ebp
            shr edi, 0x1a
            and eax, 0x3f0000
            shr eax, 0xa
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x18], eax
            mov eax, ebp
            shr edi, 0x1a
            and eax, 0x3f0000
            shr eax, 0xa
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x14], eax
            mov eax, ebp
            shr edi, 0x1a
            and eax, 0x3f0000
            shr eax, 0xa
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x10], eax
            mov eax, ebp
            shr edi, 0x1a
            and eax, 0x3f0000
            shr eax, 0xa
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0xc], eax
            mov eax, ebp
            shr edi, 0x1a
            and eax, 0x3f0000
            shr eax, 0xa
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 8], eax
            mov eax, ebp
            shr edi, 0x1a
            and eax, 0x3f0000
            shr eax, 0xa
            add eax, edi
            mov bx, word ptr [esi + eax*2]
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 4], eax
            mov ebx, dword ptr [g_5e77a838]
            mov ecx, dword ptr [g_5e77a83c]
            add edx, ebx
            dec ecx
            jne FUN_5e029ef1
            mov esp, dword ptr [g_5e77a818]
            ret
            mov eax, ebp
            shr edi, 0x1b
            and eax, 0x1f0000
            shr eax, 0xb
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x40], eax
            mov eax, ebp
            shr edi, 0x1b
            and eax, 0x1f0000
            shr eax, 0xb
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x3c], eax
            mov eax, ebp
            shr edi, 0x1b
            and eax, 0x1f0000
            shr eax, 0xb
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x38], eax
            mov eax, ebp
            shr edi, 0x1b
            and eax, 0x1f0000
            shr eax, 0xb
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x34], eax
            mov eax, ebp
            shr edi, 0x1b
            and eax, 0x1f0000
            shr eax, 0xb
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x30], eax
            mov eax, ebp
            shr edi, 0x1b
            and eax, 0x1f0000
            shr eax, 0xb
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x2c], eax
            mov eax, ebp
            shr edi, 0x1b
            and eax, 0x1f0000
            shr eax, 0xb
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x28], eax
            mov eax, ebp
            shr edi, 0x1b
            and eax, 0x1f0000
            shr eax, 0xb
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x24], eax
            mov eax, ebp
            shr edi, 0x1b
            and eax, 0x1f0000
            shr eax, 0xb
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x20], eax
            mov eax, ebp
            shr edi, 0x1b
            and eax, 0x1f0000
            shr eax, 0xb
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x1c], eax
            mov eax, ebp
            shr edi, 0x1b
            and eax, 0x1f0000
            shr eax, 0xb
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x18], eax
            mov eax, ebp
            shr edi, 0x1b
            and eax, 0x1f0000
            shr eax, 0xb
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x14], eax
            mov eax, ebp
            shr edi, 0x1b
            and eax, 0x1f0000
            shr eax, 0xb
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x10], eax
            mov eax, ebp
            shr edi, 0x1b
            and eax, 0x1f0000
            shr eax, 0xb
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0xc], eax
            mov eax, ebp
            shr edi, 0x1b
            and eax, 0x1f0000
            shr eax, 0xb
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 8], eax
            mov eax, ebp
            shr edi, 0x1b
            and eax, 0x1f0000
            shr eax, 0xb
            add eax, edi
            mov bx, word ptr [esi + eax*2]
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 4], eax
            mov ebx, dword ptr [g_5e77a838]
            mov ecx, dword ptr [g_5e77a83c]
            add edx, ebx
            dec ecx
            jne FUN_5e029ef1
            mov esp, dword ptr [g_5e77a818]
            ret
            mov eax, ebp
            shr edi, 0x1c
            and eax, 0xf0000
            shr eax, 0xc
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x40], eax
            mov eax, ebp
            shr edi, 0x1c
            and eax, 0xf0000
            shr eax, 0xc
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x3c], eax
            mov eax, ebp
            shr edi, 0x1c
            and eax, 0xf0000
            shr eax, 0xc
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x38], eax
            mov eax, ebp
            shr edi, 0x1c
            and eax, 0xf0000
            shr eax, 0xc
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x34], eax
            mov eax, ebp
            shr edi, 0x1c
            and eax, 0xf0000
            shr eax, 0xc
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x30], eax
            mov eax, ebp
            shr edi, 0x1c
            and eax, 0xf0000
            shr eax, 0xc
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x2c], eax
            mov eax, ebp
            shr edi, 0x1c
            and eax, 0xf0000
            shr eax, 0xc
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x28], eax
            mov eax, ebp
            shr edi, 0x1c
            and eax, 0xf0000
            shr eax, 0xc
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x24], eax
            mov eax, ebp
            shr edi, 0x1c
            and eax, 0xf0000
            shr eax, 0xc
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x20], eax
            mov eax, ebp
            shr edi, 0x1c
            and eax, 0xf0000
            shr eax, 0xc
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x1c], eax
            mov eax, ebp
            shr edi, 0x1c
            and eax, 0xf0000
            shr eax, 0xc
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x18], eax
            mov eax, ebp
            shr edi, 0x1c
            and eax, 0xf0000
            shr eax, 0xc
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x14], eax
            mov eax, ebp
            shr edi, 0x1c
            and eax, 0xf0000
            shr eax, 0xc
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x10], eax
            mov eax, ebp
            shr edi, 0x1c
            and eax, 0xf0000
            shr eax, 0xc
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0xc], eax
            mov eax, ebp
            shr edi, 0x1c
            and eax, 0xf0000
            shr eax, 0xc
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 8], eax
            mov eax, ebp
            shr edi, 0x1c
            and eax, 0xf0000
            shr eax, 0xc
            add eax, edi
            mov bx, word ptr [esi + eax*2]
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 4], eax
            mov ebx, dword ptr [g_5e77a838]
            mov ecx, dword ptr [g_5e77a83c]
            add edx, ebx
            dec ecx
            jne FUN_5e029ef1
            mov esp, dword ptr [g_5e77a818]
            ret
            mov eax, ebp
            shr edi, 0x1d
            and eax, 0x70000
            shr eax, 0xd
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x40], eax
            mov eax, ebp
            shr edi, 0x1d
            and eax, 0x70000
            shr eax, 0xd
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x3c], eax
            mov eax, ebp
            shr edi, 0x1d
            and eax, 0x70000
            shr eax, 0xd
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x38], eax
            mov eax, ebp
            shr edi, 0x1d
            and eax, 0x70000
            shr eax, 0xd
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x34], eax
            mov eax, ebp
            shr edi, 0x1d
            and eax, 0x70000
            shr eax, 0xd
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x30], eax
            mov eax, ebp
            shr edi, 0x1d
            and eax, 0x70000
            shr eax, 0xd
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x2c], eax
            mov eax, ebp
            shr edi, 0x1d
            and eax, 0x70000
            shr eax, 0xd
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x28], eax
            mov eax, ebp
            shr edi, 0x1d
            and eax, 0x70000
            shr eax, 0xd
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x24], eax
            mov eax, ebp
            shr edi, 0x1d
            and eax, 0x70000
            shr eax, 0xd
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x20], eax
            mov eax, ebp
            shr edi, 0x1d
            and eax, 0x70000
            shr eax, 0xd
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x1c], eax
            mov eax, ebp
            shr edi, 0x1d
            and eax, 0x70000
            shr eax, 0xd
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x18], eax
            mov eax, ebp
            shr edi, 0x1d
            and eax, 0x70000
            shr eax, 0xd
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x14], eax
            mov eax, ebp
            shr edi, 0x1d
            and eax, 0x70000
            shr eax, 0xd
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x10], eax
            mov eax, ebp
            shr edi, 0x1d
            and eax, 0x70000
            shr eax, 0xd
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0xc], eax
            mov eax, ebp
            shr edi, 0x1d
            and eax, 0x70000
            shr eax, 0xd
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 8], eax
            mov eax, ebp
            shr edi, 0x1d
            and eax, 0x70000
            shr eax, 0xd
            add eax, edi
            mov bx, word ptr [esi + eax*2]
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 4], eax
            mov ebx, dword ptr [g_5e77a838]
            mov ecx, dword ptr [g_5e77a83c]
            add edx, ebx
            dec ecx
            jne FUN_5e029ef1
            mov esp, dword ptr [g_5e77a818]
            ret
            mov eax, ebp
            shr edi, 0x1e
            and eax, 0x30000
            shr eax, 0xe
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x40], eax
            mov eax, ebp
            shr edi, 0x1e
            and eax, 0x30000
            shr eax, 0xe
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x3c], eax
            mov eax, ebp
            shr edi, 0x1e
            and eax, 0x30000
            shr eax, 0xe
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x38], eax
            mov eax, ebp
            shr edi, 0x1e
            and eax, 0x30000
            shr eax, 0xe
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x34], eax
            mov eax, ebp
            shr edi, 0x1e
            and eax, 0x30000
            shr eax, 0xe
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x30], eax
            mov eax, ebp
            shr edi, 0x1e
            and eax, 0x30000
            shr eax, 0xe
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x2c], eax
            mov eax, ebp
            shr edi, 0x1e
            and eax, 0x30000
            shr eax, 0xe
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x28], eax
            mov eax, ebp
            shr edi, 0x1e
            and eax, 0x30000
            shr eax, 0xe
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x24], eax
            mov eax, ebp
            shr edi, 0x1e
            and eax, 0x30000
            shr eax, 0xe
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x20], eax
            mov eax, ebp
            shr edi, 0x1e
            and eax, 0x30000
            shr eax, 0xe
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x1c], eax
            mov eax, ebp
            shr edi, 0x1e
            and eax, 0x30000
            shr eax, 0xe
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x18], eax
            mov eax, ebp
            shr edi, 0x1e
            and eax, 0x30000
            shr eax, 0xe
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x14], eax
            mov eax, ebp
            shr edi, 0x1e
            and eax, 0x30000
            shr eax, 0xe
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x10], eax
            mov eax, ebp
            shr edi, 0x1e
            and eax, 0x30000
            shr eax, 0xe
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0xc], eax
            mov eax, ebp
            shr edi, 0x1e
            and eax, 0x30000
            shr eax, 0xe
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 8], eax
            mov eax, ebp
            shr edi, 0x1e
            and eax, 0x30000
            shr eax, 0xe
            add eax, edi
            mov bx, word ptr [esi + eax*2]
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 4], eax
            mov ebx, dword ptr [g_5e77a838]
            mov ecx, dword ptr [g_5e77a83c]
            add edx, ebx
            dec ecx
            jne FUN_5e029ef1
            mov esp, dword ptr [g_5e77a818]
            ret
            mov eax, ebp
            shr edi, 0x1f
            and eax, 0x10000
            shr eax, 0xf
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x40], eax
            mov eax, ebp
            shr edi, 0x1f
            and eax, 0x10000
            shr eax, 0xf
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x3c], eax
            mov eax, ebp
            shr edi, 0x1f
            and eax, 0x10000
            shr eax, 0xf
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x38], eax
            mov eax, ebp
            shr edi, 0x1f
            and eax, 0x10000
            shr eax, 0xf
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x34], eax
            mov eax, ebp
            shr edi, 0x1f
            and eax, 0x10000
            shr eax, 0xf
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x30], eax
            mov eax, ebp
            shr edi, 0x1f
            and eax, 0x10000
            shr eax, 0xf
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x2c], eax
            mov eax, ebp
            shr edi, 0x1f
            and eax, 0x10000
            shr eax, 0xf
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x28], eax
            mov eax, ebp
            shr edi, 0x1f
            and eax, 0x10000
            shr eax, 0xf
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x24], eax
            mov eax, ebp
            shr edi, 0x1f
            and eax, 0x10000
            shr eax, 0xf
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x20], eax
            mov eax, ebp
            shr edi, 0x1f
            and eax, 0x10000
            shr eax, 0xf
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x1c], eax
            mov eax, ebp
            shr edi, 0x1f
            and eax, 0x10000
            shr eax, 0xf
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x18], eax
            mov eax, ebp
            shr edi, 0x1f
            and eax, 0x10000
            shr eax, 0xf
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x14], eax
            mov eax, ebp
            shr edi, 0x1f
            and eax, 0x10000
            shr eax, 0xf
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x10], eax
            mov eax, ebp
            shr edi, 0x1f
            and eax, 0x10000
            shr eax, 0xf
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0xc], eax
            mov eax, ebp
            shr edi, 0x1f
            and eax, 0x10000
            shr eax, 0xf
            add esp, ecx
            add eax, edi
            add ebp, dword ptr [g_5e77a7d8]
            mov bx, word ptr [esi + eax*2]
            mov edi, esp
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 8], eax
            mov eax, ebp
            shr edi, 0x1f
            and eax, 0x10000
            shr eax, 0xf
            add eax, edi
            mov bx, word ptr [esi + eax*2]
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 4], eax
            mov ebx, dword ptr [g_5e77a838]
            mov ecx, dword ptr [g_5e77a83c]
            add edx, ebx
            dec ecx
            jne FUN_5e029ef1
            mov esp, dword ptr [g_5e77a818]
            ret
            mov bx, word ptr [esi]
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x40], eax
            mov bx, word ptr [esi]
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x3c], eax
            mov bx, word ptr [esi]
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x38], eax
            mov bx, word ptr [esi]
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x34], eax
            mov bx, word ptr [esi]
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x30], eax
            mov bx, word ptr [esi]
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x2c], eax
            mov bx, word ptr [esi]
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x28], eax
            mov bx, word ptr [esi]
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x24], eax
            mov bx, word ptr [esi]
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x20], eax
            mov bx, word ptr [esi]
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x1c], eax
            mov bx, word ptr [esi]
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x18], eax
            mov bx, word ptr [esi]
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x14], eax
            mov bx, word ptr [esi]
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0x10], eax
            mov bx, word ptr [esi]
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 0xc], eax
            mov bx, word ptr [esi]
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 8], eax
            mov bx, word ptr [esi]
            mov eax, ebx
            shl eax, 0x10
            or eax, ebx
            mov dword ptr [edx - 4], eax
            mov ebx, dword ptr [g_5e77a838]
            mov ecx, dword ptr [g_5e77a83c]
            add edx, ebx
            dec ecx
            jne FUN_5e029ef1
            mov esp, dword ptr [g_5e77a818]
            ret
            jmp dword ptr [g_5e035084]
            jmp dword ptr [g_5e035004]
            jmp dword ptr [g_5e035008]
            jmp dword ptr [g_5e03500c]
            jmp dword ptr [g_5e035010]
            jmp dword ptr [g_5e035014]
            push 0x19
            call FUN_5e02b669
            pop ecx
            ret
            push dword ptr [esp + 4]
            call FUN_5e02b69c
            pop ecx
            ret
            push 1
            push dword ptr [esp + 8]
            __emit 0xe8 /* EMIT : MSVC6 cannot encode natively */
            __emit 0x8d /* EMIT : MSVC6 cannot encode natively */
            __emit 0x02 /* EMIT : MSVC6 cannot encode natively */
            __emit 0x00 /* EMIT : MSVC6 cannot encode natively */
    }
}
