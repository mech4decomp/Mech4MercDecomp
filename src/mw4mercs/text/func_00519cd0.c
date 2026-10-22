/*
 * FUN_00519cd0 (1259 B) — Mission/scenario loader.
 *
 * __stdcall (RET 0x4). Loads mission data by index, parsing XML
 * scenario files from Resource\Missions\ or Resource\UserMissions\.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_00412780(const char *str);
extern int __stdcall FUN_004125e0(int param1, const char *str);
extern void __stdcall FUN_00412740(int param);
extern void __stdcall FUN_004084e0(int ptr);
extern void __stdcall FUN_0040dca0(int param1, int param2, int param3);
extern int __stdcall FUN_0040ecc0(const char *str);
extern void __stdcall FUN_0040dd50(int param);
extern char __stdcall FUN_00412390(int param1, void *buf, int flags);
extern void __stdcall FUN_00536840(int param);
extern void __stdcall FUN_0040de20(void);
extern void __stdcall FUN_006f4230(int ptr);
extern void * __stdcall FUN_006f3c80(int size, int flags);
extern void __stdcall FUN_00523000(int param1, int param2);
extern void __stdcall FUN_00513c30(int param1, int param2);
extern void __stdcall FUN_006fcab0(int param1, int param2, int param3);
extern void __stdcall FUN_00540050(int param);
extern void __stdcall FUN_00540430(int param);
extern void __stdcall FUN_00540450(int param);

__declspec(naked) void FUN_00519cd0(void)
{
    

extern int DAT_007dd268;
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
        mov ecx, dword ptr [DAT_007dd268]
        mov     eax, dword ptr [esp + 4]
        mov     edx, dword ptr [ecx + 0x4c]
        sub     esp, 0x1f8
        cmp     eax, edx
        jle     l_check_range
        test    eax, eax
        jge     l_check_range
        xor     eax, eax
        add     esp, 0x1f8
        ret     4

    l_check_range:
        cmp     dword ptr [ecx + 0x54], eax
        push    ebx
        push    esi
        push    edi
        jz      l_same_index

        mov     dword ptr [ecx + 0x54], eax

        ; Build "Resource\Missions\" + name
        push    0x779cb0
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x10], 0
        call    FUN_00412780

        mov eax, dword ptr [DAT_007dd268]
        mov     ecx, dword ptr [eax + 0x54]
        mov     edx, ecx
        shl     edx, 9
        add     eax, edx
        lea     eax, [ecx + eax + 0x60]
        push    eax
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412740

        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      l_skip_refcnt1
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_refcnt1
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_skip_refcnt1:
        mov     ecx, dword ptr [esp + 0xc]
        push    0x779d60
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412740

        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      l_skip_refcnt2
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_refcnt2
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_skip_refcnt2:
        mov     edx, dword ptr [esp + 0xc]
        push    0
        push    0
        push    edx
        lea     ecx, [esp + 0x70]
        call    FUN_0040dca0

        push    0x779fb0
        lea     ecx, [esp + 0x68]
        call    FUN_0040ecc0
        mov     esi, eax
        test    esi, esi
        jz      l_usermissions

        push    0
        lea     ecx, [esp + 0x18]
        call    FUN_0040dd50

        push    0
        lea     eax, [esp + 0x18]
        push    eax
        mov eax, dword ptr [DAT_007dd268]
        mov     ecx, dword ptr [eax + 0x54]
        mov     edx, ecx
        shl     edx, 9
        add     eax, edx
        lea     eax, [ecx + eax + 0x160]
        push    eax
        mov     ecx, esi
        call    FUN_00412390

        mov edx, dword ptr [DAT_007dab44]
        mov     esi, dword ptr [edx]
        mov ecx, dword ptr [DAT_007dab40]
        xor     ecx, esi
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     esi, dword ptr [ecx + 0x50]
        mov     edi, dword ptr [esi + 0xa4]
        push    0
        call    FUN_00536840
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x18]
        mov     dword ptr [esi + 0xa4], edi
        lea     ecx, [esp + 0x14]
        jmp     l_cleanup_xml

    l_usermissions:
        push    0x779d68
        lea     ecx, [esp + 0x10]
        call    FUN_00412780

        mov eax, dword ptr [DAT_007dd268]
        mov     ecx, dword ptr [eax + 0x54]
        mov     edx, ecx
        shl     edx, 9
        add     eax, edx
        lea     eax, [ecx + eax + 0x60]
        push    eax
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412740

        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      l_skip_refcnt3
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_refcnt3
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_skip_refcnt3:
        mov     ecx, dword ptr [esp + 0xc]
        push    0x779d60
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412740

        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      l_skip_refcnt4
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_refcnt4
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_skip_refcnt4:
        mov     edx, dword ptr [esp + 0xc]
        push    0
        push    0
        push    edx
        lea     ecx, [esp + 0xc0]
        call    FUN_0040dca0

        push    0x779fb0
        lea     ecx, [esp + 0xb8]
        call    FUN_0040ecc0
        mov     esi, eax
        test    esi, esi
        jz      l_cleanup_xml2

        push    0
        lea     ecx, [esp + 0x18]
        call    FUN_0040dd50

        push    0
        lea     eax, [esp + 0x18]
        push    eax
        mov eax, dword ptr [DAT_007dd268]
        mov     ecx, dword ptr [eax + 0x54]
        mov     edx, ecx
        shl     edx, 9
        add     eax, edx
        lea     eax, [ecx + eax + 0x160]
        push    eax
        mov     ecx, esi
        call    FUN_00412390

        mov edx, dword ptr [DAT_007dab44]
        mov     esi, dword ptr [edx]
        mov ecx, dword ptr [DAT_007dab40]
        xor     ecx, esi
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     esi, dword ptr [ecx + 0x50]
        mov     edi, dword ptr [esi + 0xa4]
        push    0
        call    FUN_00536840
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x18]
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esi + 0xa4], edi
        call    FUN_0040de20

    l_cleanup_xml2:
        lea     ecx, [esp + 0xb4]

    l_cleanup_xml:
        call    FUN_0040de20

        mov edx, dword ptr [DAT_007dd268]
        mov     eax, dword ptr [edx + 0x40970]
        test    eax, eax
        jz      l_alloc_buf

        push    eax
        call    FUN_006f4230
        mov eax, dword ptr [DAT_007dd268]
        mov     dword ptr [eax + 0x40970], 0

    l_alloc_buf:
        push    0
        push    0x100
        call    FUN_006f3c80
        mov edx, dword ptr [DAT_007dd268]
        mov     ebx, eax
        mov     dword ptr [edx + 0x40970], ebx

        mov     eax, dword ptr [edx + 0x54]
        mov     ecx, eax
        shl     ecx, 9
        mov     esi, edx
        add     esi, ecx
        or      ecx, 0xffffffff
        lea     edi, [eax + esi + 0xe0]
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, ebx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb

        mov     eax, dword ptr [edx + 0x54]
        mov     ecx, eax
        shl     ecx, 9
        add     edx, ecx
        mov ecx, dword ptr [DAT_007dab44]
        lea     edx, [eax + edx + 0x1e0]
        mov eax, dword ptr [DAT_007dab40]
        push    edx
        xor     eax, dword ptr [ecx]
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        add     ecx, 0xa8
        call    FUN_00412780

        mov eax, dword ptr [DAT_007dab44]
        mov     esi, dword ptr [eax]
        mov edx, dword ptr [DAT_007dab40]
        xor     edx, esi
        mov     esi, dword ptr [edx + 0xc]
        xor     esi, 0x85739531
        mov     ecx, esi
        call    FUN_00540050
        mov     ecx, esi
        call    FUN_00540430
        mov     ecx, esi
        call    FUN_00540450

        lea     ecx, [esp + 0x64]
        call    FUN_0040de20

        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      l_common_path

        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_common_path

        push    eax
        call    FUN_004084e0
        add     esp, 4
        jmp     l_common_path

    l_same_index:
        mov     ecx, dword ptr [ecx + 0x40970]
        test    ecx, ecx
        jz      l_alloc_buf_same

        push    ecx
        call    FUN_006f4230
        mov ecx, dword ptr [DAT_007dd268]
        mov     dword ptr [ecx + 0x40970], 0

    l_alloc_buf_same:
        push    0
        push    0x100
        call    FUN_006f3c80
        mov     edx, eax
        mov eax, dword ptr [DAT_007dd268]
        mov     dword ptr [eax + 0x40970], edx

        mov     ecx, dword ptr [eax + 0x54]
        mov     esi, ecx
        shl     esi, 9
        add     eax, esi
        lea     edi, [ecx + eax + 0xe0]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb

        mov eax, dword ptr [DAT_007dd268]
        mov     ecx, dword ptr [eax + 0x54]
        mov     edx, ecx
        shl     edx, 9
        add     eax, edx
        mov edx, dword ptr [DAT_007dab44]
        mov     esi, dword ptr [edx]
        lea     eax, [ecx + eax + 0x1e0]
        mov ecx, dword ptr [DAT_007dab40]
        xor     ecx, esi
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        push    eax
        add     ecx, 0xa8
        call    FUN_00412780

    l_common_path:
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        mov eax, dword ptr [DAT_007dab40]
        xor     eax, edx
        mov     edx, dword ptr [eax + 0xc]
        xor     edx, 0x85739531
        mov     esi, dword ptr [edx + 0x50]
        mov     eax, dword ptr [esi + 0xa4]
        push    0x100
        push    eax
        call    FUN_00523000
        push    eax
        lea     ecx, [esp + 0x10c]
        push    ecx
        call    FUN_00513c30
        add     esp, 0xc

        lea     edx, [esp + 0x104]
        push    edx
        push    0x79fa6c
        push    0
        call    FUN_006fcab0

        mov     eax, dword ptr [esi + 0x38]
        mov ecx, dword ptr [DAT_007dab44]
        mov     ebx, dword ptr [ecx]
        test    eax, eax
        mov eax, dword ptr [DAT_007dab40]
        jz      l_no_mission

        xor     eax, ebx
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0xea60
        jmp     l_call_vtable

    l_no_mission:
        xor     eax, ebx
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0xea61

    l_call_vtable:
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x79fb24
        push    0
        call    FUN_006fcab0

        pop     edi
        pop     esi
        mov     eax, 1
        pop     ebx
        add     esp, 0x1f8
        ret     4
    }


}
