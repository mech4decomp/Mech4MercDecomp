/*
 * FUN_005bd680 (1247 B) - MWEntityManager packet handler. __thiscall,
 * RET 0xC (3 stack params: param_1, param_2, param_3).
 *
 * Dispatches on param_2 (0x47..0x99) updating entity arrays and calling
 * various handlers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern __int64 __cdecl FUN_00707f50(void);
extern void *__cdecl FUN_004084d0(int size);
extern void __fastcall FUN_00680860(void *this, int a);
extern void __fastcall FUN_0041eb40(void *this, void *p, int n);
extern void __fastcall FUN_00539160(void *this);
extern void *__cdecl FUN_00680960(int a, int b, int c);
extern void __fastcall FUN_005be210(void *this, void *p);
extern void __fastcall FUN_0067c620(void *this, int a, void *p);
extern void __fastcall FUN_0067d1d0(void *this, int a, void *p);
extern void __fastcall FUN_0067eb20(void *this, void *p);
extern void __fastcall FUN_0067e870(void *this, int a, int b, void *p);
extern void __fastcall FUN_0067d440(void *this, int a, int b, void *p);
extern void __fastcall FUN_0067e930(void *this, int a, int b, void *p);
extern void __cdecl FUN_00680b30(int a, void *p);
extern int __cdecl FUN_006fab90(const char *s);

__declspec(naked) void __fastcall FUN_005bd680(void *this)
{
    

extern int DAT_007dab40;
extern int DAT_007dab44;
extern int DAT_007db090;
extern int DAT_007f2298;
extern int DAT_007f2278;
extern int DAT_007f227c;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x418
        mov eax, dword ptr [DAT_007dab40]
        push    ebx
        push    esi
        push    edi
        mov edi, dword ptr [DAT_007dab44]
        mov     ebx, ecx
        mov     ecx, dword ptr [edi]
        xor     ecx, eax
        mov     eax, dword ptr [ecx + 0xc]
        xor     eax, 0x85739531
        mov     dword ptr [ebp - 0xc], eax
        mov     eax, dword ptr [eax + 0x4c]
        cmp     dword ptr [eax + 0x14], 0x5
        jnz     done_all
        mov     edx, dword ptr [ebp + 0xc]
        cmp     edx, 0x47
        jnz     case_48
        mov     esi, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [esi + 0x10]
        mov     eax, dword ptr [esi + 0x18]
        mov     ecx, dword ptr [edi]
        sub     eax, edx
        xor ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0x14]
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx + 0x1814]
        mov     edx, dword ptr [ebp + 0x8]
        mov     edi, dword ptr [ecx + edx*0x4 + 0x3038]
        add     ecx, 0x3030
        shl     eax, 0x3
        add     edi, eax
        mov     dword ptr [ecx + edx*0x4 + 0x8], edi
        add     dword ptr [ecx + 0xc00], eax
        call    FUN_00707f50
        mov ecx, dword ptr [DAT_007db090]
        mov     dword ptr [ebp - 0x1c], eax
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x28]
        xor     edi, edi
        mov     dword ptr [ebp - 0x18], edx
        cmp     dword ptr [ebx + eax*0x4 + 0xb4], edi
        jnz     skip_alloc
        push    0x30
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, edi
        jz      alloc_zero
        mov edx, dword ptr [DAT_007db090]
        mov     cl, byte ptr [edx + 0x28]
        mov     byte ptr [ebp - 0x4], cl
        mov     edx, dword ptr [ebp - 0x4]
        and     edx, 0xff
        push    edx
        mov     ecx, eax
        call    FUN_00680860
        jmp     alloc_done
alloc_zero:
        xor     eax, eax
alloc_done:
        mov edx, dword ptr [DAT_007db090]
        xor     ecx, ecx
        mov     cl, byte ptr [edx + 0x28]
        mov     dword ptr [ebx + ecx*0x4 + 0xb4], eax
skip_alloc:
        push    0x8
        lea     eax, [ebp - 0x10]
        push    eax
        mov     ecx, esi
        mov     dword ptr [ebp + 0xc], edi
        mov     dword ptr [ebp + 0x8], edi
        mov     dword ptr [ebp - 0x10], edi
        call    FUN_0041eb40
        push    0x2
        lea     ecx, [ebp + 0xc]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [ebp + 0xc], edi
        call    FUN_0041eb40
        push    0x2
        lea     edx, [ebp + 0x8]
        push    edx
        mov     ecx, esi
        mov     dword ptr [ebp + 0x8], edi
        call    FUN_0041eb40
        push    0x8
        lea     eax, [ebp + 0x10]
        push    eax
        mov     ecx, esi
        mov     dword ptr [ebp + 0x10], edi
        call    FUN_0041eb40
        or      eax, 0xffffffff
        mov     ecx, 0xff
        lea     edi, [ebp + 0xfffffbe8]
        rep stosd
        mov     eax, dword ptr [ebp + 0x10]
        xor     edi, edi
        test    eax, eax
        jle     loop_end
loop_fill:
        push    0x8
        lea     ecx, [ebp - 0x14]
        push    ecx
        mov     ecx, esi
        mov     byte ptr [ebp - 0x14], 0x0
        call    FUN_0041eb40
        push    0x20
        lea     edx, [ebp - 0x4]
        push    edx
        mov     ecx, esi
        mov     dword ptr [ebp - 0x4], 0x0
        call    FUN_0041eb40
        mov     eax, dword ptr [ebp - 0x14]
        mov     ecx, dword ptr [ebp - 0x4]
        and     eax, 0xff
        mov     dword ptr [ebp + eax*0x4 + 0xfffffbe8], ecx
        mov     eax, dword ptr [ebp + 0x10]
        inc     edi
        cmp     edi, eax
        jl      loop_fill
loop_end:
        mov     eax, dword ptr [ebp - 0xc]
        xor     dl, dl
        lea     edi, [ebp + 0xfffffbe8]
        add     eax, 0x3584
        mov     dword ptr [ebp - 0x4], 0xff
scan_loop:
        mov     esi, dword ptr [edi]
        cmp     esi, -0x1
        mov     cl, byte ptr [eax - 0x4c]
        jnz     scan_notneg
        test    cl, cl
        jz      scan_next
        cmp     dword ptr [eax], 0x0
        jz      scan_next
        jmp     scan_set
scan_notneg:
        test    cl, cl
        jz      scan_set
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        jz      scan_set
        mov     ecx, dword ptr [ecx + 0x170]
        mov     cx, word ptr [ecx + 0xba]
        mov     word ptr [ebp - 0xa], cx
        mov     ecx, dword ptr [ebp - 0xa]
        and     ecx, 0xffff
        cmp     ecx, esi
        jz      scan_next
scan_set:
        mov     dl, 0x1
scan_next:
        mov     ecx, dword ptr [ebp - 0x4]
        add     eax, 0x2038
        add     edi, 0x4
        dec     ecx
        mov     dword ptr [ebp - 0x4], ecx
        jnz     scan_loop
        test    dl, dl
        jz      no_change
        mov eax, dword ptr [DAT_007f2298]
        inc     eax
        test    eax, eax
        mov dword ptr [DAT_007f2298], eax
        jz      counter_zero
        cmp     eax, 0xa
        jge     counter_ge10
        mov edx, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        call    FUN_00539160
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
no_change:
        mov dword ptr [DAT_007f2298], 0x0
counter_zero:
        mov ecx, dword ptr [DAT_007db090]
        mov     dl, byte ptr [ecx + 0x28]
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [ebp + 0xc]
        push    eax
        mov     byte ptr [ebp - 0xc], dl
        mov     eax, dword ptr [ebp - 0xc]
        mov     edx, dword ptr [ebp - 0x10]
        push    ecx
        and     eax, 0xff
        mov     ecx, dword ptr [ebx + eax*0x4 + 0xb4]
        push    edx
        call    FUN_00680960
        push    eax
        mov     ecx, ebx
        call    FUN_005be210
        call    FUN_00707f50
        mov     edi, dword ptr [ebp - 0x1c]
        mov     esi, dword ptr [ebp - 0x18]
        mov ecx, dword ptr [DAT_007f2278]
        sub     eax, edi
        sbb     edx, esi
        add     ecx, eax
        mov eax, dword ptr [DAT_007f227c]
        pop     edi
        adc     eax, edx
        pop     esi
        mov dword ptr [DAT_007f2278], ecx
        mov dword ptr [DAT_007f227c], eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
counter_ge10:
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [edx + 0xc]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    0x0
        call    dword ptr [eax + 0x2c]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
case_48:
        cmp     edx, 0x48
        jnz     case_49
        mov     ecx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ebx + ecx*0x4 + 0x530]
        test    eax, eax
        jz      done_all
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        push    ecx
        mov     ecx, dword ptr [ebx + 0x92c]
        call    FUN_0067c620
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
case_49:
        cmp     edx, 0x49
        jnz     case_4b
        mov     eax, dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [ebp + 0x8]
        push    eax
        push    ecx
        mov     ecx, dword ptr [ebx + 0x92c]
        call    FUN_0067d1d0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
case_4b:
        cmp     edx, 0x4b
        jnz     case_4a
        mov     edx, dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [ebx + 0x930]
        push    edx
        call    FUN_0067eb20
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
case_4a:
        cmp     edx, 0x4a
        jnz     case_50
        mov     ecx, dword ptr [ecx + 0x14]
        mov     edx, dword ptr [ebp + 0x10]
        mov     esi, dword ptr [edx + 0x10]
        mov     eax, dword ptr [edx + 0x18]
        mov     edx, dword ptr [ebp + 0x8]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x1814]
        sub     eax, esi
        mov     esi, dword ptr [ecx + edx*0x4 + 0x7880]
        add     ecx, 0x7878
        shl     eax, 0x3
        add     esi, eax
        mov     dword ptr [ecx + edx*0x4 + 0x8], esi
        mov     edx, dword ptr [ecx + 0xc00]
        pop     edi
        add     edx, eax
        pop     esi
        mov     dword ptr [ecx + 0xc00], edx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
case_50:
        cmp     edx, 0x50
        jl      case_4c
        cmp     edx, 0x53
        jg      case_4c
case_50_body:
        mov     ecx, dword ptr [ecx + 0x14]
        mov     esi, dword ptr [ebp + 0x10]
        mov     edi, dword ptr [esi + 0x10]
        mov     eax, dword ptr [esi + 0x18]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x1814]
        sub     eax, edi
        mov     edi, dword ptr [ebp + 0x8]
        add     ecx, 0x4848
        shl     eax, 0x3
        add     dword ptr [ecx + edi*0x4 + 0x8], eax
        add     dword ptr [ecx + 0xc00], eax
        mov     ecx, dword ptr [ebx + 0x930]
        push    esi
        push    edx
        push    edi
        call    FUN_0067e870
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
case_4c:
        cmp     edx, 0x4c
        jl      case_54
        cmp     edx, 0x4f
        jg      case_54
        mov     ecx, dword ptr [ecx + 0x14]
        mov     esi, dword ptr [ebp + 0x10]
        mov     edi, dword ptr [esi + 0x10]
        mov     eax, dword ptr [esi + 0x18]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x1814]
        sub     eax, edi
        mov     edi, dword ptr [ebp + 0x8]
        add     ecx, 0x4848
        shl     eax, 0x3
        add     dword ptr [ecx + edi*0x4 + 0x8], eax
        add     dword ptr [ecx + 0xc00], eax
        mov     ecx, dword ptr [ebx + 0x92c]
        push    esi
        push    edx
        push    edi
        call    FUN_0067d440
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
case_54:
        cmp     edx, 0x54
        jl      case_58
        cmp     edx, 0x57
        jle     case_50_body
case_58:
        cmp     edx, 0x58
        jnz     case_59
        mov     ecx, dword ptr [ecx + 0x14]
        mov     edx, dword ptr [ebp + 0x10]
        mov     edi, dword ptr [edx + 0x10]
        mov     eax, dword ptr [edx + 0x18]
        mov     esi, dword ptr [ebp + 0x8]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x1814]
        sub     eax, edi
        mov     edi, dword ptr [ecx + esi*0x4 + 0x4850]
        add     ecx, 0x4848
        shl     eax, 0x3
        add     edi, eax
        mov     dword ptr [ecx + esi*0x4 + 0x8], edi
        mov     edi, dword ptr [ecx + 0xc00]
        push    edx
        add     edi, eax
        push    0x58
        mov     dword ptr [ecx + 0xc00], edi
        mov     ecx, dword ptr [ebx + 0x930]
        push    esi
        call    FUN_0067e930
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
case_59:
        cmp     edx, 0x59
        jl      case_unhandled
        cmp     edx, 0x99
        jg      case_unhandled
        mov ecx, dword ptr [DAT_007db090]
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x28]
        mov     ecx, dword ptr [ebx + eax*0x4 + 0xb4]
        test    ecx, ecx
        jz      done_all
        mov     eax, dword ptr [ebp + 0x10]
        push    eax
        push    edx
        call    FUN_00680b30
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
case_unhandled:
        push    0x7871c4
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      done_all
        int     3
done_all:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }


}
