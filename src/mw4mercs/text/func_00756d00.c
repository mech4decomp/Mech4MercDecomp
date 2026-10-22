/*
 * FUN_00756D00 (916 B) — Large object constructor (__fastcall, ECX = this).
 *
 * Initializes a large structure, opens a stream, builds a wave-format
 * descriptor, and registers several sub-objects. Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_858991;
extern unsigned char g_87dd0a;
extern unsigned char g_858990;
extern unsigned int  g_857f28;
extern unsigned int  g_858994;
extern unsigned int  g_857f2c;
extern unsigned int  g_858bf8;
extern unsigned int  g_8aadc8;
extern unsigned int  g_858998;
extern unsigned int  g_856a88;
extern unsigned int  g_856a8c;
extern unsigned int  g_7a31f0;
extern unsigned int  g_7a31f4;
extern unsigned int  g_7a31f8;
extern unsigned int  g_7a31fc;
extern unsigned int  g_856b94;

extern void __cdecl FUN_006faa30(void);
extern void __cdecl FUN_00757e20(void);
extern void __cdecl FUN_00757e60(void);
extern void __cdecl FUN_00757410(void);
extern void __cdecl FUN_00757d70(void);
extern void __cdecl FUN_00740db0(void);
extern void __cdecl FUN_00757eb0(void);
extern void __cdecl FUN_00757f60(void);
extern void __cdecl FUN_006f4940(void);
extern void __cdecl FUN_00740d60(void);
extern void __cdecl FUN_007580c0(void);
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_00755870(void);

__declspec(naked) void __fastcall FUN_00756d00(void *this)
{
    __asm {
        sub     esp, 0x40
        push    ebx
        push    ebp
        push    esi
        push    edi
        xor     ebx, ebx
        mov     eax, 0x3f800000
        mov     esi, ecx
        mov     dword ptr [esi + 0xd8], eax
        mov     dword ptr [esi + 0xc0], eax
        mov     dword ptr [esi + 0xbc], eax
        mov     dword ptr [esi + 0xb8], eax
        mov     dword ptr [esi + 0xb0], eax
        mov     dword ptr [esi + 0xa8], eax
        xor     ecx, ecx
        lea     eax, [esi + 0xc4]
        mov     edx, eax
        mov     dword ptr [esi + 0x84], 0x40
        mov     dword ptr [esi + 0xdc], 0x3dcccccd
        mov     dword ptr [esi + 0xe0], ebx
        mov     dword ptr [esi + 0xb4], ebx
        mov     dword ptr [esi + 0xac], ebx
        mov     dword ptr [esi + 0xa4], ebx
        mov     dword ptr [esi + 0xa0], ebx
        mov     dword ptr [esi + 0x90], ebx
        mov     dword ptr [esi + 0x8c], ebx
        mov     dword ptr [esi + 0x88], ebx
        mov     dword ptr [esi + 0x9c], ebx
        mov     dword ptr [esi + 0x98], ebx
        mov     dword ptr [esi + 0x94], ebx
        mov     dword ptr [edx], ecx
        mov     dword ptr [edx + 0x4], ecx
        mov     dword ptr [edx + 0x8], ecx
        mov     dword ptr [edx + 0xc], ecx
        mov     word ptr [edx + 0x10], cx
        mov     ecx, dword ptr [g_857f28]
        mov     word ptr [eax], 0x1
        mov     al, [g_858991]
        neg     al
        lea     ebp, [esi + 0x4]
        lea     edi, [esi + 0xc]
        mov     word ptr [esi + 0xc6], 0x2
        mov     word ptr [esi + 0xd2], 0x10
        mov     word ptr [esi + 0xd0], 0x4
        sbb     eax, eax
        and     eax, 0x5622
        add     eax, 0x5622
        mov     dword ptr [esi + 0xc8], eax
        shl     eax, 0x2
        mov     dword ptr [esi + 0xcc], eax
        mov     eax, [g_858994]
        cmp     eax, ecx
        mov     byte ptr [esi + 0xe8], bl
        mov     dword ptr [esi + 0x8], ebx
        mov     dword ptr [esi], ebx
        mov     dword ptr [ebp], ebx
        mov     dword ptr [edi], ebx
        jc      L1
        xor     eax, eax
        mov     [g_858994], eax
L1:
        push    ebx
        push    ebx
        mov     [g_857f2c], eax
        call    FUN_006faa30
        mov     eax, [g_857f2c]
        lea     ecx, [eax + eax*0x4]
        shl     ecx, 0x3
        sub     ecx, eax
        push    ebx
        shl     ecx, 0x4
        push    edi
        add     ecx, 0x856ba8
        push    ecx
        mov     byte ptr [g_87dd0a], 0x1
        call    FUN_00757e20
        push    ebx
        push    0x1
        mov     dword ptr [esp + 0x1c], eax
        mov     byte ptr [g_87dd0a], bl
        call    FUN_006faa30
        cmp     dword ptr [esp + 0x14], ebx
        jge     L2
        mov     dword ptr [edi], ebx
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        mov     byte ptr [g_858990], 0x1
        pop     ebx
        add     esp, 0x40
        ret
L2:
        mov     edx, dword ptr [g_858bf8]
        mov     eax, dword ptr [edi]
        push    0x2
        push    edx
        push    eax
        call    FUN_00757e60
        mov     ecx, esi
        call    FUN_00757410
        mov     edx, dword ptr [esi + 0xc]
        push    ebx
        xor     eax, eax
        mov     ecx, 0x9
        lea     edi, [esp + 0x30]
        rep stosd
        push    ebp
        lea     ecx, [esp + 0x34]
        push    ecx
        push    edx
        mov     dword ptr [esi + 0xe4], 0x1de6
        mov     dword ptr [esp + 0x3c], 0x24
        mov     dword ptr [esp + 0x40], 0x11
        mov     byte ptr [g_87dd0a], 0x1
        call    FUN_00757d70
        cmp     eax, ebx
        mov     byte ptr [g_87dd0a], bl
        jge     L3
        mov     eax, dword ptr [esi + 0xc]
        push    eax
        call    FUN_00740db0
        pop     edi
        mov     dword ptr [esi + 0xc], ebx
        mov     eax, esi
        pop     esi
        pop     ebp
        mov     byte ptr [g_858990], 0x1
        pop     ebx
        add     esp, 0x40
        ret
L3:
        mov     ecx, dword ptr [ebp]
        lea     eax, [esi + 0xc4]
        push    eax
        push    ecx
        call    FUN_00757eb0
        mov     edx, dword ptr [ebp]
        lea     eax, [esi + 0x70]
        push    eax
        push    edx
        mov     dword ptr [eax], 0x14
        call    FUN_00757f60
        mov     eax, dword ptr [esi + 0x78]
        mov     ecx, dword ptr [g_8aadc8]
        push    0x1
        push    eax
        push    ecx
        call    FUN_006f4940
        mov     edx, dword ptr [ebp]
        push    esi
        push    0x7a30c0
        push    edx
        call    FUN_00740d60
        mov     eax, dword ptr [esi + 0xb4]
        mov     ecx, dword ptr [esi + 0xb0]
        mov     edx, dword ptr [esi + 0xac]
        push    0x1
        push    eax
        mov     eax, dword ptr [esi + 0xa8]
        push    ecx
        mov     ecx, dword ptr [esi + 0xa4]
        push    edx
        mov     edx, dword ptr [esi + 0xa0]
        push    eax
        mov     eax, dword ptr [esi]
        push    ecx
        push    edx
        push    eax
        call    FUN_007580c0
        mov     eax, [g_858998]
        xor     ebp, ebp
        cmp     eax, ebx
        mov     [g_856a88], eax
        jle     L4
        mov     edi, 0x856a8c
L7:
        mov     ecx, dword ptr [g_8aadc8]
        push    ecx
        push    0x120
        call    FUN_004084c0
        add     esp, 0x8
        cmp     eax, ebx
        jz      L5
        mov     ecx, eax
        call    FUN_00755870
        jmp     L6
L5:
        xor     eax, eax
L6:
        mov     dword ptr [edi], eax
        mov     dword ptr [eax + 0x94], ebp
        mov     eax, [g_856a88]
        inc     ebp
        add     edi, 0x4
        cmp     ebp, eax
        jl      L7
L4:
        xor     edx, edx
        mov     dword ptr [esp + 0x18], edx
        mov     dword ptr [esp + 0x1c], edx
        mov     dword ptr [esp + 0x20], edx
        mov     dword ptr [esp + 0x24], edx
        mov     eax, 0x1
        mov     word ptr [esp + 0x18], ax
        mov     word ptr [esp + 0x1a], ax
        xor     eax, eax
        mov     word ptr [esp + 0x28], dx
        mov     edx, 0x15888
        mov     ecx, 0x9
        lea     edi, [esp + 0x2c]
        rep stosd
        mov     ecx, dword ptr [g_7a31f0]
        mov     dword ptr [esp + 0x20], edx
        mov     dword ptr [esp + 0x34], edx
        mov     edx, dword ptr [g_7a31f4]
        lea     eax, [esp + 0x18]
        mov     dword ptr [esp + 0x3c], eax
        mov     eax, [g_7a31f8]
        push    ebx
        mov     dword ptr [esp + 0x44], ecx
        mov     ecx, dword ptr [g_7a31fc]
        mov     dword ptr [esp + 0x48], edx
        lea     edx, [esp + 0x14]
        mov     dword ptr [esp + 0x4c], eax
        push    edx
        lea     eax, [esp + 0x34]
        mov     dword ptr [esp + 0x54], ecx
        mov     ecx, dword ptr [esi + 0xc]
        push    eax
        mov     ebp, 0x10
        push    ecx
        mov     dword ptr [esp + 0x2c], 0xac44
        mov     word ptr [esp + 0x36], bp
        mov     word ptr [esp + 0x34], 0x2
        mov     dword ptr [esp + 0x20], ebx
        mov     dword ptr [esp + 0x40], ebp
        mov     dword ptr [esp + 0x3c], 0x24
        call    FUN_00757d70
        mov     edx, dword ptr [esp + 0x10]
        lea     eax, [esi + 0x8]
        push    eax
        push    0x7a30d0
        push    edx
        call    FUN_00740d60
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        call    FUN_00740db0
        push    ebx
        push    0x1
        call    FUN_006faa30
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        mov     dword ptr [g_856b94], 0x1
        pop     ebx
        add     esp, 0x40
        ret
    }
}
