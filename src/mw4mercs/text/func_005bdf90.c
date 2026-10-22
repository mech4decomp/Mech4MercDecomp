/*
 * FUN_005bdf90 (634 B) - __thiscall, RET 4 (1 param: slot index).
 *
 * Allocates/initializes an entity slot, builds a packet via FUN_0041ec50,
 * and dispatches it through FUN_004ce190.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern void __fastcall FUN_00680860(void *this, int a);
extern void *__fastcall FUN_00680ab0(void *this, int a);
extern void *__fastcall FUN_00680960(void *this, int a, int b);
extern void __fastcall FUN_005be210(void *this, void *p);
extern void __fastcall FUN_0041ee70(void *this, int a);
extern void __fastcall FUN_0041ec50(void *this, void *p, int n);
extern void __fastcall FUN_0041ea10(void *this);
extern void __fastcall FUN_004ce190(void *this, int a, int b, void *p, int c);
extern void __fastcall FUN_0041ef60(void *this);

__declspec(naked) void __fastcall FUN_005bdf90(void *this)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007b4684;
extern int DAT_007b4674;
extern int DAT_007b4680;
__asm {
mov eax, dword ptr [DAT_007dab44]
        mov edx, dword ptr [DAT_007dab40]
        sub     esp, 0x38
        push    ebx
        mov     ebx, dword ptr [esp + 0x40]
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [edi + ebx*0x4 + 0xb4]
        xor     ecx, edx
        mov     ebp, dword ptr [ecx + 0xc]
        xor     ebp, 0x85739531
        test    eax, eax
        jnz     skip_alloc
        push    0x30
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      alloc_zero
        push    ebx
        mov     ecx, eax
        call    FUN_00680860
        jmp     alloc_done
alloc_zero:
        xor     eax, eax
alloc_done:
        mov     dword ptr [edi + ebx*0x4 + 0xb4], eax
skip_alloc:
        mov eax, dword ptr [DAT_007b4684]
        cmp     eax, -0x1
        jnz     lab_5be048
        mov     edx, ebx
        shl     edx, 0x7
        add     edx, ebx
        shl     edx, 0x3
        sub     edx, ebx
        mov     ecx, dword ptr [ebp + edx*0x8 + 0x35c0]
        test    ecx, ecx
        lea     eax, [ebp + edx*0x8]
        jnz     lab_5be046
        mov ecx, dword ptr [DAT_007b4674]
        cmp     ecx, 0x7
        jl      lab_5be02f
        mov     eax, dword ptr [eax + 0x35b4]
        cmp     eax, 0x7
        jl      lab_5be023
        mov     eax, 0x2
        jmp     lab_5be048
lab_5be023:
        xor     ecx, ecx
        cmp     eax, 0x4
        setge   cl
        mov     eax, ecx
        jmp     lab_5be048
lab_5be02f:
        cmp     ecx, 0x6
        jl      lab_5be046
        mov     ecx, dword ptr [eax + 0x35b4]
        xor     edx, edx
        cmp     ecx, 0x3
        setg    dl
        mov     eax, edx
        jmp     lab_5be048
lab_5be046:
        xor     eax, eax
lab_5be048:
        mov     esi, dword ptr [edi + ebx*0x4 + 0xb4]
        push    eax
        mov eax, dword ptr [DAT_007b4680]
        push    eax
        mov     ecx, esi
        call    FUN_00680ab0
        push    eax
        mov     ecx, esi
        call    FUN_00680960
        mov     esi, eax
        push    esi
        mov     ecx, edi
        call    FUN_005be210
        push    0x0
        lea     ecx, [esp + 0x24]
        call    FUN_0041ee70
        push    0x8
        lea     ecx, [esi + 0x24]
        push    ecx
        lea     ecx, [esp + 0x28]
        call    FUN_0041ec50
        push    0x2
        lea     edx, [esi + 0x2c]
        push    edx
        lea     ecx, [esp + 0x28]
        call    FUN_0041ec50
        push    0x2
        add     esi, 0x30
        push    esi
        lea     ecx, [esp + 0x28]
        call    FUN_0041ec50
        xor     eax, eax
        mov     byte ptr [esp + 0x4c], 0x0
        mov     dword ptr [esp + 0x10], eax
loop1:
        mov     ecx, eax
        shl     ecx, 0x7
        add     ecx, eax
        shl     ecx, 0x3
        sub     ecx, eax
        mov     dl, byte ptr [ebp + ecx*0x8 + 0x3538]
        test    dl, dl
        lea     ecx, [ebp + ecx*0x8]
        jz      loop1_next
        mov     edx, dword ptr [ecx + 0x3584]
        test    edx, edx
        jz      loop1_next
        inc     byte ptr [esp + 0x4c]
loop1_next:
        inc     eax
        cmp     eax, 0xff
        mov     dword ptr [esp + 0x10], eax
        jl      loop1
        push    0x8
        lea     edx, [esp + 0x50]
        push    edx
        lea     ecx, [esp + 0x28]
        call    FUN_0041ec50
        xor     eax, eax
        mov     dword ptr [esp + 0x10], eax
loop2:
        mov     ecx, eax
        shl     ecx, 0x7
        add     ecx, eax
        shl     ecx, 0x3
        sub     ecx, eax
        mov     dl, byte ptr [ebp + ecx*0x8 + 0x3538]
        test    dl, dl
        lea     ecx, [ebp + ecx*0x8]
        jz      loop2_next
        mov     ecx, dword ptr [ecx + 0x3584]
        test    ecx, ecx
        jz      loop2_next
        mov     edx, dword ptr [ecx + 0x170]
        mov     ax, word ptr [edx + 0xba]
        mov     word ptr [esp + 0x1a], ax
        mov     ecx, dword ptr [esp + 0x1a]
        and     ecx, 0xffff
        push    0x8
        lea     edx, [esp + 0x14]
        mov     dword ptr [esp + 0x18], ecx
        push    edx
        lea     ecx, [esp + 0x28]
        call    FUN_0041ec50
        push    0x20
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_0041ec50
        mov     eax, dword ptr [esp + 0x10]
loop2_next:
        inc     eax
        cmp     eax, 0xff
        mov     dword ptr [esp + 0x10], eax
        jl      loop2
        lea     ecx, [esp + 0x20]
        call    FUN_0041ea10
        mov     edx, dword ptr [esp + 0x20]
        push    0x0
        lea     ecx, [esp + 0x24]
        call    dword ptr [edx + 0xc]
        mov     ecx, dword ptr [esp + 0x30]
        mov     eax, dword ptr [esp + 0x38]
        mov edi, dword ptr [DAT_007dab40]
        sub     eax, ecx
        mov ecx, dword ptr [DAT_007dab44]
        mov     dword ptr [esp + 0x28], 0xffffffec
        mov     edx, dword ptr [ecx]
        xor     edx, edi
        mov     ecx, dword ptr [edx + 0x14]
        add     edx, 0x14
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x1814]
        mov     edi, dword ptr [ecx + ebx*0x4 + 0x3c44]
        add     ecx, 0x3c3c
        shl     eax, 0x3
        add     edi, eax
        mov     dword ptr [ecx + ebx*0x4 + 0x8], edi
        mov     esi, dword ptr [ecx + 0xc00]
        add     esi, eax
        push    0x1
        lea     eax, [esp + 0x24]
        push    eax
        mov     dword ptr [ecx + 0xc00], esi
        mov     ecx, dword ptr [edx]
        push    0x47
        push    ebx
        xor     ecx, 0x85739531
        call    FUN_004ce190
        lea     ecx, [esp + 0x20]
        call    FUN_0041ef60
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x38
        ret     0x4
    }


}
